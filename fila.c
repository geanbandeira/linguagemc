#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void inserir_na_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL)
            *fila = novo;
        else{
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("\nErro ao alocar memoria.\n");
}


No* remover_da_fila(No **fila){
    No *remover = NULL;

    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
    }
    else
        printf("\tFila vazia\n");
    return remover;
}

void mostrar(No *fila){
    printf("\t------- FILA --------\n\n");
    while(fila){
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t------- FIM FILA --------\n");
}

int main(){
    No *r, *fila = NULL;
    int opcao, valor;

    do{
    	printf("\n\t| Digite o numero desejado\n\n");
        printf("\t0 - Sair\n\t1 - Inserir um numero na fila\n\t2 - Inserir 100 numeros aleatorios \n\t3 - Remover um numero da fila\n\t4 - Remover 100 numeros\n\t5 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        	case 0:
            printf("Saindo...");
            break;
        case 1:
            printf("Digite um valor:");
            scanf("%d", &valor);
            inserir_na_fila(&fila, valor);
            break;
        case 2:
        	srand(time(NULL));
            for (valor = 0; valor<100; valor++){
            inserir_na_fila(&fila, rand() % 100);
        }
            printf("\nForam inseridos 100 numeros aleatorios na fila\n");
            break;
        case 3:
            r = remover_da_fila(&fila);
            if(r){
                printf("Removido: %d\n", r->valor);
                free(r);
            }
            break;
        case 4:
        	for (valor = 0; valor<100; valor++){
            r = remover_da_fila(&fila);
        }
            if(r){
                printf("Foram removidos 100 numeros: %d\n", r->valor);
                free(r);
            }
            break;
        case 5:
            mostrar(fila);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}

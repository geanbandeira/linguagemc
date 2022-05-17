#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *topo;
    int tam;
}Pilha;

void empilhar(Pilha *p, int x){
    No *no = malloc(sizeof(No));
    no->valor = x;
    no->proximo = p->topo;
    p->topo = no;
}

No* desempilhar(Pilha *p){
    No *no = NULL;
    if(p->topo){
        no = p->topo;
        p->topo = no->proximo;
    }
    return no;
}

void mostrar(No *no){
    if(no){
        printf("%d\n", no->valor);
        mostrar(no->proximo);
    }
}

int main() {
    int op, valor;
    No *no;
    Pilha p;
    p.tam = 0;
    p.topo = NULL;

    do{
    	printf("\n | Digite o numero desejado");
        printf("\n 0 - Sair");
        printf("\n 1 - Empilhar UM Numero");
        printf("\n 2 - Empilhar 200 Numeros aleatorios");
        printf("\n 3 - Desempilhar UM Numero");
        printf("\n 4 - Desempilhar 200 Numeros de uma vez");
        printf("\n 5 - Mostrar\n\n ");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            printf("\nValor a ser empilhado:");
            scanf("%d", &valor);
            empilhar(&p, valor);
            break;
        case 2:
            srand(time(NULL));
            for (valor = 0; valor<200; valor++){
            empilhar(&p, rand() % 100);
        }
        printf("\n\tForam empilhados 200 Numeros\n");
            break;
        case 3:
            no = desempilhar(&p);
            if(no){
                printf("\tDesemplilhado: %d\n", no->valor);
            }
            break;
            
        case 4:
        	for (valor = 0; valor<200; valor++){
            no = desempilhar(&p);
        }
            if(no){
                printf("\n\t200 Numeros foram Desempilhados\n");
            }
            break;
            
        case 5:
        	if(p.topo>0){
	            printf("\n-------- PILHA --------\n");
	            mostrar(p.topo);
	            printf("-------- PILHA --------\n");
	        }else{
	            printf("\n-- PILHA VAZIA --\n");
	        }
            break;
            
        default:
            printf("Opcao invalida!\n");
        }

    }while(op != 0);
    return 0;
}

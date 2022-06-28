#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
    free(desempilhar);
}

void mostrar(No *no){
    if(no){
        printf("%d\n", no->valor);
        mostrar(no->proximo);
    }
}

void mostrartop(No *no){
    if(no){
        printf("%d\n", no->valor);
    }
}

pilha_cont(No *topo)
{
    No * p;
    int cont = 0;
    for(p = topo; p != NULL; p = p->proximo){
        cont++;
    }
    return cont;
}


int main() {
    int op, valor, n, nn, nnn;
    No *no;
    Pilha p;
    p.tam = 0;
    p.topo = NULL;

    do{
    	printf("\n Digite o Número Desejado", setlocale(LC_ALL, ""));
        printf("\n |0| Sair");
        printf("\n |1| Empilhar X Números", setlocale(LC_ALL, ""));
        printf("\n |2| Desempilhar X Números", setlocale(LC_ALL, ""));
        printf("\n |3| Mostrar Topo da Pilha");
        printf("\n |4| Mostrar Pilha Completa");
        printf("\n |5| Contar Elementos\n");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
            
        case 1:
            printf("Entre os a quantidade de números que deseja Empilhar\n", setlocale(LC_ALL, ""));
            scanf("%d", &n);
            srand(time(NULL));
            for (valor = 0; valor<n; valor++){
            empilhar(&p, rand() % 100);
        }
        printf("\nForam empilhados %d Números\n", n, setlocale(LC_ALL, ""));
            break;
            
        case 2:
        	printf("Entre com a quantidade de números que deseja Desempilhar\n", setlocale(LC_ALL, ""));
            scanf("%d", &nn);
        	for (valor = 0; valor<nn; valor++){
            no = desempilhar(&p);
            printf("posicão desempilhada %d\n", valor, setlocale(LC_ALL, ""));
        }
            if(no){
                printf("\n%d Números foram Desempilhados\n", nn, setlocale(LC_ALL, ""));
            }
            break;
            
        case 3:
            printf("O topo da pilha é\n", setlocale(LC_ALL, ""));
            mostrartop(p.topo);
            break;
   
        case 4:
        	if(p.topo>0){
	            printf("\n-------- PILHA --------\n");
	            mostrar(p.topo);
	            printf("-------- PILHA --------\n");
	        }else{
	            printf("\n-- PILHA VAZIA --\n");
	        }
            break;
        case 5:
               printf("\nElementos na pilha: %d\n\n",  pilha_cont(p.topo) );
               break;
        default:
            printf("Opcão inválida!\n", setlocale(LC_ALL, ""));
        }
    }while(op != 0);
    return 0;
    
}


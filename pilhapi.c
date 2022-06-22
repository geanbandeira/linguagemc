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

No* desempilha(Pilha *p){
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

void mostrartop(No *no){
    if(no){
        printf("%d\n", no->valor);
    }
}


No* remover(Pilha *p){
    No *no = NULL;
    if(p->topo){
        no = p->topo;
        p->topo = no->proximo;
    }
    return no;
}


int main() {
    int op, valor, n, nn, nnn;
    No *no;
    Pilha p;
    p.tam = 0;
    p.topo = NULL;

    do{
    	printf("\n | Digite o numero desejado");
        printf("\n 0 - Sair");
        printf("\n 1 - Empilhar X numeros");
        printf("\n 2 - Desempilhar X numeros");
        printf("\n 3 - para Remover por valor (só para casos urgentes)");
        printf("\n 4 - Mostrar soh o Topo da pilha");
        printf("\n 5 - Mostrar a pilha completa");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
            
        case 1:
            printf("Entre os a quantidade de numeros que deseja Empilhar\n");
            scanf("%d", &n);
            srand(time(NULL));
            for (valor = 0; valor<n; valor++){
            empilhar(&p, rand() % 100);
        }
        printf("\n\tForam empilhados %d Numeros\n", n);
            break;
            
        case 2:
        	printf("Entre os a quantidade de numeros que deseja Desempilhar\n");
            scanf("%d", &nn);
        	for (valor = 0; valor<nn; valor++){
            no = desempilhar(&p);
            printf("posicao desempilhada %d\n", valor);
        }
            if(no){
                printf("\n%d Numeros foram Desempilhados\n", nn);
            }
            break;
            
        case 3:
        	printf("NAO FIZ DesafioEntre com o numero que deseja desempilhar\n");
            
            break;
            
        case 4:
            printf("O topo da pilha eh\n");
            mostrartop(p.topo);
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


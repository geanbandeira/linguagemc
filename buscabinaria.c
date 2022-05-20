#include <stdio.h>
#include <stdlib.h>

//já que estamos estudando arvore, aqui é uma arvore binaria de busca.

typedef struct no{
    int valor;
    struct no *direita, *esquerda;
}No;

No* inserir(No *raiz, int num){
    if(raiz == NULL){
        No *aux = malloc(sizeof(No));
        aux->valor = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    }
    else{
        if(num < raiz->valor)
            raiz->esquerda = inserir(raiz->esquerda, num);
        else
            raiz->direita = inserir(raiz->direita, num);
        return raiz;
    }
}


No* buscar(No *raiz, int num){
    if(raiz){
        if(num == raiz->valor)
            return raiz;
        else if(num < raiz->valor)
            return buscar(raiz->esquerda, num);
        else
            return buscar(raiz->direita, num);
    }
    return NULL;
}

void mostrar(No *raiz){
    if(raiz){
        printf("%d ", raiz->valor);
        mostrar(raiz->esquerda);
        mostrar(raiz->direita);
    }
}


int main(){

    No *busca, *raiz = NULL;
    int opcao, valor;

    do{
    	printf("\nDigite a opcao\n\n");
        printf("0 - Sair\n1 - Inserir\n2 - Mostrar\n3 - Buscar\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("\nDigite um valor: ");
            scanf("%d", &valor);
            raiz = inserir(raiz, valor);
            break;
        case 2:
        	if(raiz == NULL){
        		printf("\nInsira um numero antes, para posteriormente exibir na tela.\n");
			}else{
				printf("\n\tNumero encontrado:\n\t");
            mostrar(raiz);
			}
            break;
        case 3:
            printf("\nDigite o valor a ser procurado: ");
            scanf("%d", &valor);
            busca = buscar(raiz, valor);
            if(busca)
                printf("\nNumero encontrado: %d\n", busca->valor);
            else
                printf("\nNumero nao encontrado!\n");
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!\n");
        }
    }while(opcao != 0);

    return 0;
}

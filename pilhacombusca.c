#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAVE (64)
#define BUF   (128)

typedef struct ITEM_PILHA
{
    char chave[ CHAVE + 1 ];
    double valor;
    struct ITEM_PILHA * proximo;
} ITEM_PILHA;

ITEM_PILHA * pilha_criar( char * chave, double valor )
{
    ITEM_PILHA * e = calloc(1, sizeof(ITEM_PILHA));
    strcpy( e->chave, chave );
    e->valor = valor;
    return e;
}

ITEM_PILHA * pilha_inserir( ITEM_PILHA *topo, char * chave, double valor )
{
    ITEM_PILHA * novo = pilha_criar( chave, valor );
    novo->proximo = topo;
    topo = novo;
    return topo;
}

ITEM_PILHA * pilha_remover( ITEM_PILHA * topo )
{
    ITEM_PILHA * aux = NULL;
    if( topo )
        aux = topo->proximo;
    free(topo);
    return aux;
}

void pilha_imprimir( ITEM_PILHA * topo )
{
    ITEM_PILHA * aux;
    printf("\n");
    for( aux = topo; aux != NULL; aux = aux->proximo )
        printf( "%s = %g\n", aux->chave, aux->valor );
    printf("\n");
}

int pilha_contar( ITEM_PILHA * topo )
{
    ITEM_PILHA * aux;
    int cont = 0;
    for( aux = topo; aux != NULL; aux = aux->proximo )
        cont++;
    return cont;
}

ITEM_PILHA * pilha_buscar_chave( ITEM_PILHA * topo, char * chave )
{
    ITEM_PILHA * aux;
    for( aux = topo; aux != NULL; aux = aux->proximo )
        if( !strcmp(aux->chave, chave) )
            return aux;
    return NULL;
}

int main( void )
{
    ITEM_PILHA * topo = NULL;
    char buf[BUF];
    char chave[CHAVE];
    double valor;

    while(1)
    {
        printf("Opcoes:\n");
        printf("|1| Inserir Elemento \n");
        printf("|2| Remover Elemento \n");
        printf("|3| Imprimir\n");
        printf("|4| Buscar\n");
        printf("|5| Contar Elementos\n");
        printf("|6| Sair\n");
        printf("\n");
        fgets( buf, sizeof(buf), stdin );

        switch( buf[0] )
        {
            case '1':
                printf("Chave: ");
                fgets( buf, sizeof(buf), stdin );
                buf[strcspn(buf, "\n")] = 0;
                strcpy( chave, buf );

                if(pilha_buscar_chave( topo, chave ))
                {
                    printf( "\nChave ja existe!\n\n" );
                    break;
                }

                printf("Valor: ");
                fgets( buf, sizeof(buf), stdin );
                valor = atof(buf);

                topo = pilha_inserir( topo, chave, valor );
                break;

           case '2':
                if(!topo)
                {
                    printf( "\nPilha vazia!\n\n" );
                    break;
                }

                printf( "\nRemovendo Chave: %s\n\n", topo->chave );
                topo = pilha_remover(topo);
                break;

           case '3':
                pilha_imprimir(topo);
                break;

           case '4':
                printf("\nBuscar Chave:");
                fgets( buf, sizeof(buf), stdin );
                buf[strcspn(buf, "\n")] = 0;
                strcpy( chave, buf );

                ITEM_PILHA * e = pilha_buscar_chave( topo, chave );

                if(!e)
                {
                    printf( "Chave nao encontrada!\n\n");
                    break;
                }

                printf( "Chave encontrada: %g\n\n", e->valor );
                break;

            case '5':
               printf("\nElementos na pilha: %d\n\n",  pilha_contar(topo) );
               break;

           case '6':
               return 0;
        }
     }
}

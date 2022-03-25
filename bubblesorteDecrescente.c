#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20

int main()
{
    int numeros[TAM];
	int i, aux, contador;
    printf("Entre com os 10 numeros\n");
    for(i=0; i<TAM; i++){
    scanf("%i", &numeros[i]);
}
printf("Os arrays sao: \n");
	for(i=0;i<TAM;i++){
	printf("%d\n", numeros[i]);
}
//bubblesort
	for(contador=1; contador<TAM; contador++){
		for(i=0; i<TAM-1; i++){
			if(numeros[i]<numeros[i+1]){
			aux=numeros[i];
			numeros[i]=numeros[i+1];
			numeros[i+1]=aux;
    		}
		}
	}
		printf("O array ondenado de forma decrescente\n");
		for(i=0; i<TAM; i++){
		printf("%i\n", numeros[i]);
		}
    return 0;
}



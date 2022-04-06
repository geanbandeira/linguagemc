#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 10

int main(){
	int numeros[TAM];
	int i, contador, aux;

	printf("Entre com os numeros\n");
	for(i=0; i<TAM; i++){
	scanf("%d", &numeros[i]);
}
	printf("Veja a ordem atual dos vetores\n");
	for(i=0;i<TAM; i++){
	printf("%d\n", numeros[i]);
}
	for(contador=1; contador<TAM;contador++){
		for(i=1; i<TAM; i++){
			if(numeros[i] > numeros[i+1]){
			aux = numeros[i];
			numeros[i] = numeros[i+1];
			numeros[i+1] = aux;
		}
			}
 		}
	
	printf("Os numeros ordenados sao \n" );
	for(i=1; i<TAM; i++){
	printf("%d\n", numeros[i]);
}

return 0;
}

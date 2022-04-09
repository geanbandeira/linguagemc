#include <stdio.h>
#include <locale.h>
#define TAM 10

int main(){
	int vet[TAM];
	int buscar, i;
	int resp[TAM];
	int p=0;
	
printf("Entre com os todos os números que deseja\n", setlocale(LC_ALL,""));
for(i=0;i<TAM;i++){
	scanf("%d", &vet[i]);
}
printf("Esses foram os números escolhidos\n", setlocale(LC_ALL,""));
for(i=0;i<TAM;i++){
	printf( "%d\n", vet[i]);
}
	
	printf("Entre com o número que voce deseja encontrar\n", setlocale(LC_ALL,""));
	scanf("%d", &buscar);
	for(i=0;i<=TAM-1;i++){
		if(vet[i] == buscar){
			resp[p]=i;
			p=p+1;
		}
	}
	if(p>0){
		for(i=0;i<=p-1;i++){
			printf("Número %d encontrado, ele está na posição %d", buscar, resp[i], setlocale(LC_ALL,""));
		}
	}else{
		printf("Número não encontrado", setlocale(LC_ALL,""));
	}

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void insertion(int *a);
int main(){
int i, vet[TAM];
 
printf("Digite 10 Valores \n");
for(i = 0; i < TAM; i++){
scanf("%d", &vet[i]);
}

insertion(vet);
printf("Valores ordenados\n");
for(i = 0; i < TAM; i++){
printf("%d\n", vet[i]);
}

system("pause");
return 0;
}

void insertion(int *a){
int i, j, tmp;
  
for(i = 1; i < TAM; i++){
tmp = a[i];
for(j = i-1; j >= 0 && tmp < a[j]; j--){
a[j+1] = a[j];
}
a[j+1] = tmp;
	}
}










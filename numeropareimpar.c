#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a;
  printf("Digite um numero inteiro\n");
  scanf("%i", &a);
  
  if(a%2==0) {
  	printf("O numero eh par\n");
  } else { 
  printf("O numero eh impar\n");
  }

  system("pause");
  return 0;
}

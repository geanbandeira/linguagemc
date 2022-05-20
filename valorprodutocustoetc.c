#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome;
	float custo, valorvenda;
	
	
	printf("Entre com o nome do produto\n", nome);
	scanf("%s", &nome);
	printf ("Entre com o custo do produto\n", custo);
	scanf("%f", &custo);
	
	
	valorvenda = (custo+(custo *0.30))/100;
	printf("O valor final do produto eh %f\n", valorvenda);
	 
    return 0;
}

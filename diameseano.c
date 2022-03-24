#include<stdio.h>
#include<stdlib.h>
int main ()
{
int dia, mes, ano;
int dia1, mes1, ano1;
scanf("%d %d %d", &dia, &mes, &ano);
scanf("%d %d %d", &dia1, &mes1, &ano1);

if(ano < ano1){
	printf("A data %d %d %d ocorreu antes", dia, mes, ano);
} else if (ano > ano1){
	printf("A data %d %d %d ocorreu antes", dia1, mes1, ano1);	
} else {
	if (mes <mes1){
		printf("A data %d %d %d ocorreu antes", dia, mes, ano);
	} else if (mes>mes1) {
		printf("A data %d %d %d ocorreu antes", dia1, mes1, ano1);
	} else {
	
		if (dia<dia1){
			printf("A data %d %d %d ocorreu antes", dia, mes, ano);
		}else if (dia > dia1){
			printf("A data %d %d %d ocorreu antes", dia1, mes1, ano1);
		} else {
			printf("As datas são iguais");
		}
}
} 

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	struct data{
	int dia;
	int mes;
	int ano;
	int dia1;
	int mes1;
	int ano1;
};

struct data p;
printf("Entre com a primeira Data no formato dd/mm/aaaa \n");
scanf("%d%d%d", &p.dia, &p.mes, &p.ano);

printf("Entre com a segunda Data  \n");
scanf("%d %d %d" , &p.dia1, &p.mes1, &p.ano1);


if(p.ano < p.ano1){
	printf("A data %d  %d  %d ocorreu antes\n", p.dia, p.mes, p.ano);
	} else if (p.ano > p.ano1){
	printf("A data %d  %d  %d ocorreu antes\n", p.dia1, p.mes1, p.ano1);
	} else {
	if (p.mes < p.mes1){
	printf("A data %d  %d  %d ocorreu antes\n", p.dia, p.mes, p.ano);
	
	} else if (p.mes > p.mes1) {
	printf("A data %d  %d  %d ocorreu antes\n", p.dia1, p.mes1, p.ano1);
	
	} else {
	if (p.dia < p.dia1){
	printf("A data %d  %d  %d ocorreu antes\n", p.dia, p.mes, p.ano);
	
	}else if (p.dia > p.dia1){
	printf("A data %d  %d  %d ocorreu antes\n", p.dia1, p.mes1, p.ano1);
	
	} else {
	printf("As datas são iguais");
	}
	}
	} 
	
	
system("pause");
return 0;
}






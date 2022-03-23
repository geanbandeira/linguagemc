#include<stdio.h>
#include<stdlib.h>
int main ()
{
int dia, mes, ano;
int diaatual, mesatual, anoatual;

printf("Entre com a data do validade do produto ", dia, mes, ano);
scanf("%d %d %d", &dia, &mes, &ano);

printf("Entre com a data do dia de hoje ", diaatual, mesatual, anoatual);
scanf("%d %d %d", &diaatual, &mesatual, &anoatual);

if(ano < anoatual){
	printf("A data %d %d %d diz que o produto estah vencido", dia, mes, ano);
} else if (ano > anoatual){
	printf("A data %d %d %d do produto estah ok", diaatual, mesatual, anoatual);	
} else {
	if (mes <mesatual){
		printf("A data %d %d %d do produto diz que ele jah venceu", dia, mes, ano);
	} else if (mes>mesatual) {
		printf("A data %d %d %d do produto diz que ele estah ok", diaatual, mesatual, anoatual);
	} else {
	
		if (dia<diaatual){
			printf("A data %d %d %d do produto diz que ele jah estah vencido", dia, mes, ano);
		}else if (dia > diaatual){
			printf("A data %d %d %d do produto diz que ele estah ok", diaatual, mesatual, anoatual);
		} else {
			printf("As datas são iguais o produto vence hoje");
		}
}
} 

return 0;
}

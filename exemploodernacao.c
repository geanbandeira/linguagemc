#include <stdio.h>
#include <stdlib.h>
 //https://www.arquivodecodigos.com.br/dicas/3813-c-como-usar-pesquisa-ou-busca-linear-ou-sequencial-nos-elementos-de-um-vetor-na-linguagem-c.html
// método que permite efetuar a busca linear em um vetor  
int pesquisa_linear(int vetor[], int tam, int valor){    
  // percorre os elementos do vetor
  int i;
  for(i = 0; i < tam; i++){    
    // o valor foi encontrado?
    if(vetor[i] == valor){    
      return i;    
    }    
  }    
 
  // não foi encontrado? vamos retornar -1    
  return -1;    
}   
 
int main(int argc, char *argv[]) {   
  // vamos criar um vetor de 5 elementos int
  int valores[] = {32, 7, 21, 4, 90};    
  // vamos pesquisar o valor 21
  int valor = 21;
 
  // vamos verifiar se o valor está no vetor
  int indice = pesquisa_linear(valores, 5, valor);
  if(indice > -1){
    printf("O valor foi encontrado no índice: %d\n\n", indice);  
  }
  else{
    printf("O valor não foi encontrado.\n\n");
  }   
     
  system("pause");
  return 0;
}

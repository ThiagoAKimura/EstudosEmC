#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

  setlocale(LC_ALL,"");

  //Defininfo variaveis

  char letra = 'x';

  //Condicional Simples

  if(letra == 'x'){
    printf("A letra � X!\n");
  }

  //Printar o codigo ascii da letra

  printf("O codigo da letra em Ascii �: %d\n",letra);

  if(letra == 120){
    printf("A letra � X!\n");
  }
}

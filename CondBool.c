#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

  setlocale(LC_ALL,"");

  //Definindo as variaveis

  bool a = true, b = false;

  //Se a for verdadeiro
  if(a){
    printf("A � verdadeiro!\n");
  }

  //Comparando o B

  if(b){
    printf("B � verdadeiro!\n");
  }
  else{
    printf("B � falso!\n");
  }

  //Comparando uma falsidade

  if(!b){
    printf("B � falso!\n");
  }

}

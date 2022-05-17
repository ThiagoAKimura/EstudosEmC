#include <stdio.h>
#include <stdlib.h>

void main() {
 
    //Crie um algoritmo que informe se o valor lido é primo ou não
    int i, valor, aux = 0;
 
    printf("Digite um valor para saber se ele eh primo:");
    scanf("%d", &valor);
 
    for(i = 1; i <= valor ; i++){
 
        //Conferindo quantas vezes houve divisibilidade
        if(valor % i == 0){
            aux++;
        }
 
        //Exibe o resto da divisão na tela
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
     }
 
     if(aux == 2){
        printf("O numero eh primo!");
    }else{
        printf("O numero nao eh primo! Pois ele tem %d divisores", aux);
    }
}
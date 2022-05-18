#include <stdio.h>
#include <stdlib.h>

int main(){

    //Definindo variaveis

    int a = 5,opcao;

    //Condicional if
    //Usar == quando for para comparar

    if(a == 5){
        printf("A eh igual a 5\n");
    }

    //Condição para ver se o número é par ou impar

    if(a % 2 == 1){
        printf("O numero eh impar");
    }
    else{
        printf("O numero eh par");
    }

    //Condições compostas

    printf("\nDigite a opcao 1 ou 2\n");
    scanf("%d",&opcao);

    if(opcao == 1){
        printf("Voce digitou a opcao 1");
    }
    else if(opcao == 2){
        printf("Voce digitou a opcao 2");
    }
    else{
        printf("Opcao invalida");
    }

}

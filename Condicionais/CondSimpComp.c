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

    //Condi��o para ver se o n�mero � par ou impar

    if(a % 2 == 1){
        printf("O numero eh impar");
    }
    else{
        printf("O numero eh par");
    }

    //Condi��es compostas

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

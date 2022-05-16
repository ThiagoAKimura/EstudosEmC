#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Definindo a variavel

    int a = 10;

    //Conectivo Lógico &(and)

    if(a > 5 && a < 15){
        printf("A variavel 'a' está entre 5 e 15\n");
    }

    //Se UMA comparação for falsa, não entra no bloco

    if(a > 5 && a > 15){
        printf("A variavel 'a' está entre 5 e 15\n");
    }

    //Pode se colocar infintos &&

    if(a > 5 && a < 15 && a%2 == 0 && a <100){
        printf("A variavel 'a' está entre 5 e 100 e é multiplo de 2\n");
    }

    //Conectivo Lógico |(or), se UMA comparação for verdadeira, ja entra no bloco

    if(a>5 || a>15){
        printf("A variavel 'a' é maior que 5 OU 15\n");
    }

    //Misturando Conectivos

    if((a > 5 && a < 15) || a == 20){
        printf("A variavel 'a' está entre 5 e 15 ou ela vale 20\n");
    }

}

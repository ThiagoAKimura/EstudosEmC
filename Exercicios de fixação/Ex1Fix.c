#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 2 notas e mostre a media entre elas:

    //Criando as variaveis em float
    float a,b,resultado;

    //Pegando o valor das variaveis
    printf("Digite a primeira nota:");
    scanf("%f",&a);
    printf("Digite a segunda nota:");
    scanf("%f",&b);

    //Calculando a m�dia
    resultado = (a+b)/2;

    //Exibindo a m�dia
    printf("A media � %.2f",resultado);
}

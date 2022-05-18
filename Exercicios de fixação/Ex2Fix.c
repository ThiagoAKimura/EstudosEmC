#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 2 notas e mostre o valor absoluto da diferença entre elas

    float valor1,valor2,valorabs;

    printf("Digite o valor 1: ");
    scanf("%f",&valor1);
    printf("Digite o valor 2: ");
    scanf("%f",&valor2);

    valorabs = abs(valor1-valor2);

    printf("O valor absoluto é %.2f",valorabs);
}

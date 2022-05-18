#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    int a,b,c,resultado;

    printf("Digite os 3 valores: ");
    scanf("%d%d%d",&a,&b,&c);

    resultado = a * b * c;

    printf("%d",resultado);


}

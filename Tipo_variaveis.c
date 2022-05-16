#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Ola mundo!!!");

    //Variavel de numero inteiro:

    int a = 5;
    printf("%d\n",a);

    //Variavel de numero quebrado:

    float b = 5.5;
    printf("%f\n",b);

    //Variavel de palavra:

    char c = 't';
    printf("O valor inicial de c eh: %c\n",c);

    //Esse fflush serve para autalizar a variavel de char!!

    fflush(stdin);
    scanf("%c",&c);
    printf("O novo valor de c eh: %c\n",c);
}

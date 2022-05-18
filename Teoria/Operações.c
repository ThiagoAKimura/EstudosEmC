#include <stdio.h>
#include <stdlib.h>

void main(){
    //Definindo as variaveis

    int a = 6, b = 3, c =-3;

    //Soma
    printf("A soma de %d e %d = %d\n",a, b , a+b);

    //Subtração
    printf("A subtracao de %d e %d = %d\n",a, b , a-b);

    //Divisão
    printf("A divisao de %d e %d = %d\n",a, b , a/b);

    //Multiplicação
    printf("A multiplicacao de %d e %d = %d\n",a, b , a*b);

    //Resto da divisão
    printf("O resto de %d divido por %d = %d\n",a, b , a%b);

    //Valor absoluto
    printf("O valor absoluto de %d = %d", c, abs(c));
}

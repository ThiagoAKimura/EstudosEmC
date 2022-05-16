#include <stdio.h>
#include <stdlib.h>


void main(){
    // Definindo as variavies
    int a = 5, b = 10, c = 15;
    char d = 'x'

    //Maior

    if(a>2){
        printf("%d eh maior que 2", a);
    }

    //Maior ou igual

    if (c >= b){
        printf("\n%d eh maior ou igual a %d",c,b);
    }

    //Menor

    if(a<10){
        printf("\n%d eh menor que 10", a);
    }

    //Menor ou igual

    if(a<=10){
        printf("\n%d eh menor ou igual a 10", a);
    }

    //Diferente
    if(a != 10){
        printf("\n%d eh diferente de 10",a);
    }
}

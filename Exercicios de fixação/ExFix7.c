#include <stdio.h>
#include <stdlib.h>

void main(){

    //Crie um algoritmo que imprima os números de 10 até 0
    //de forma regressiva. (usando While, Do While ou For)

    //While

    int i=10,j=10,k;

    printf("Usando While:\n");

    while (i>=0)
    {
        printf("%d\n", i);

        i--;
    }

    printf("Usando Do While:\n");

    do{
        printf("%d\n", j);

        j--;

    }while (j>=0);

    printf("Usando For:\n");


    for(k=10; k>=0; k--){
        
        printf("%d\n",k);

    }
       

}
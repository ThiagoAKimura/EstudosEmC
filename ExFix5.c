#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 3 valores e informe se eles são
    //iguais entre si para formar um triangulo equilatero.

    int lado1,lado2,lado3;

    printf("Digite o valor do primeiro lado:\n");
    scanf("%d",&lado1);
    printf("Digite o valor do segundo lado:\n");
    scanf("%d",&lado2);
    printf("Digite o valor do terceiro lado:\n");
    scanf("%d",&lado3);

    if(lado1 == lado2 && lado1== lado3){
        printf("\nEsses lados são iguais entre si e podem formar um triangulo equilatero!\n");
    }
    else{
        printf("\nEsses lados não são iguais entre si e não podem formar um triangulo equilatero!\n");
    }
}





/*Código feito pelo professor:


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores e informe se eles são
    //iguais entre si para formarem os lados de um triângulo equilátero.
    int ladoA, ladoB, ladoC;
    printf("Digite os 3 valores:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    //Analisa se é equilátero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("\nO triângulo é equilátero");
    }else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO triângulo é isósceles!");
        }else{
            printf("\nO triângulo é escaleno!");
        }
    }

}



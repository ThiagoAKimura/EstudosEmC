#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 3 valores e informe se eles s�o
    //iguais entre si para formar um triangulo equilatero.

    int lado1,lado2,lado3;

    printf("Digite o valor do primeiro lado:\n");
    scanf("%d",&lado1);
    printf("Digite o valor do segundo lado:\n");
    scanf("%d",&lado2);
    printf("Digite o valor do terceiro lado:\n");
    scanf("%d",&lado3);

    if(lado1 == lado2 && lado1== lado3){
        printf("\nEsses lados s�o iguais entre si e podem formar um triangulo equilatero!\n");
    }
    else{
        printf("\nEsses lados n�o s�o iguais entre si e n�o podem formar um triangulo equilatero!\n");
    }
}





/*C�digo feito pelo professor:


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores e informe se eles s�o
    //iguais entre si para formarem os lados de um tri�ngulo equil�tero.
    int ladoA, ladoB, ladoC;
    printf("Digite os 3 valores:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    //Analisa se � equil�tero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("\nO tri�ngulo � equil�tero");
    }else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO tri�ngulo � is�sceles!");
        }else{
            printf("\nO tri�ngulo � escaleno!");
        }
    }

}



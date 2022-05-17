#include <stdio.h>
#include <stdlib.h>

void main(){

    //Crie um algoritmo que imprima os números  
    //pares de 10 a 20 (usando While, Do While ou For)

    int i = 10, j = 10, k;

    //While

    printf("Usando While:\n");

    while (i<=20)
    {
        printf("%d\n",i);
        i = i + 2;
    }
    
    printf("Usando Do While:\n");

    do{
        printf("%d\n",j);
        j = j + 2;

    }while (j<=20);

    printf("Usando For:\n");

    for ( k = 10; k <=20; k = k + 2)
    {
        printf("%d\n",k);
    }
    

    //Pausa o programa
    system("pause");
}


/*Codigo do professor:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Crie um algoritmo que imprima os números
    //pares de 10 a 20 (usando While, Do While ou For)
    int i;
 
    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d é par \n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
    }
}*/

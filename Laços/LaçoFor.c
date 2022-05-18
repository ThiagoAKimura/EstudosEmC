#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Definindo as variaveis
    int cont;


    //Tabuada do 2
    for(cont = 1; cont <= 10; cont++){
        printf("\n5 X %d = %d", cont , 5*cont );
    }

    //Contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont +2 ){

        printf("\n%d", cont);

    }

    //Contagem regressiva

    for(cont = 10 ;cont > 0 ; cont-- ){

        printf("\n%d",cont);

    }

}
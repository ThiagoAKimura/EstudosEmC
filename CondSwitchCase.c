#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo Variaveis
    int a = 1;
    char b = 'x';

    //C�digo de exemplo com if
    if(a == 1){
        printf("\nOp��o escolhida: 1\n");
    }else if(a == 2){
        printf("\nOp��o escolhida: 2\n");
    }else if(a == 3){
        printf("\nOp��o escolhida: 3\n");
    }else{
        printf("\nOp��o invalida\n");
    }

    //O mesmo c�digo com Switch Case (int)
    switch(a){
        case 1:
            printf("A op��o escolhida foi a: 1\n");
            break;
        case 2:
            printf("A op��o escolhida foi a: 2\n");
            break;
        case 3:
            printf("A op��o escolhida foi a: 3\n");
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("A letra eh x\n");
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
    }

}

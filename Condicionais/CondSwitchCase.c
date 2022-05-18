#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo Variaveis
    int a = 1;
    char b = 'x';

    //Código de exemplo com if
    if(a == 1){
        printf("\nOpção escolhida: 1\n");
    }else if(a == 2){
        printf("\nOpção escolhida: 2\n");
    }else if(a == 3){
        printf("\nOpção escolhida: 3\n");
    }else{
        printf("\nOpção invalida\n");
    }

    //O mesmo código com Switch Case (int)
    switch(a){
        case 1:
            printf("A opção escolhida foi a: 1\n");
            break;
        case 2:
            printf("A opção escolhida foi a: 2\n");
            break;
        case 3:
            printf("A opção escolhida foi a: 3\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("A letra eh x\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

}

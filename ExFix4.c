#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //Crie um algaritimo que leia 3 notas e calcule a média entre elas
    //Se o valor for maior que 7 informe que o aluno foi aprovado
    //Se for menor que 7 ele foi reprovado

    float nota1,nota2,nota3;

    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f",&nota3);

    if((nota1 + nota2 + nota3)/3 >= 7){
        printf("\nAprovado!\n");
    }
    else{
        printf("\nReprovado!\n");
    }

}

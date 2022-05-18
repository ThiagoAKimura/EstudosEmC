#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Codigo para usar acentos
    setlocale(LC_ALL,"");

    /*Crie um algoritimo que leia dois valores e depois crie um menu (Usando Switch Case) de 4 opções
    1-Somar
    2-Subtrair
    3-Dividir
    4-Multiplicar
    Depois que o usuario escolher entre as opções, mostre o resultado da operção escolhida com os dois valores lidos.*/


    //Criando as variaveis
    float valor1,valor2;
    int opcao;

    //Obtendo os valores
    printf("\nDigite o primeiro valor: ");
    scanf("%f",&valor1);
    printf("\nDigite o segundo valor: ");
    scanf("%f",&valor2);

    //Printando as opções
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar\n");
    printf("\nEscolha uma opção:\n");

    //Escolhendo a opção
    scanf("%d",&opcao);


    //Opções com Switch Case
    switch(opcao){

    case 1:
        printf("A soma dos números é igual a: %.2f",valor1 + valor2);
        break;
    case 2:
        printf("A subtração dos números é igual a: %.2f",valor1 - valor2);
        break;
    case 3:
        printf("A divisão dos números é igual a: %.2f",valor1 / valor2);
        break;
    case 4:
        printf("A multiplicação dos números é igual a: %.2f",valor1 * valor2);
        break;
    default:
        printf("Opção Inválida!");
        break;
    }


}



//Código do professor

/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 opções:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida
    com os dois valores lidos.*/
    /*float valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:");
    scanf("%f", &valor2);

    printf("\nBoa tarde coleguinha, escolha uma opção:");
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Resultado da soma: %.2f", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da subtração: %.2f", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da divisão: %.2f", valor1 / valor2);
            break;
        case 4:
            printf("Resultado da multiplicação: %.2f", valor1 * valor2);
            break;
        default:
            printf("Opção inválida!");
            break;
    }

}
*/

#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definindo Vari�veis
    int opcao;

    //Confere ou valida a opção escolhida
    while (opcao < 1 || opcao > 3 )
    {
    printf("\nEscolha uma opcao:\n");

    printf("\n1 - Opcao 1");
    printf("\n2 - Opcao 2");
    printf("\n3 - Opcao 3\n");

    scanf("\n%d",&opcao);

    //Resultado de acordo com a opção escolhida
    switch (opcao)
    {
    case 1:
        printf("A opcao 1 foi escolhida\n");
        break;
    case 2:
        printf("A opcao 2 foi escolhida\n");
        break;
    case 3:
        printf("A opcao 3 foi escolhida\n");
        break;
    
    default:
        printf("Opcao invalida\n");
        break;
    }    
    }
    

    

    //Pausa o programa ap�s executar
    system("pause");

}
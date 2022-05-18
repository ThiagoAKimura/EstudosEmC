#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"");

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variavel que recebe o resto da divisao do número por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Variavel que recebe o resto da divisao do número por 5s (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d\n",aleatorio);
    printf("%d\n",aleatorioSegundo);

    //Gerando outro número com a mesma "formula"
    aleatorioSegundo = (rand() % 5) + 1;
    printf("%d\n",aleatorioSegundo);

}

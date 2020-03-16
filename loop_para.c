#include<stdio.h>
#include<stdlib.h>
//#include <math.h>

int main()
{  
    //declaração de variaveis
    int contador, valor_final;

    //leitura
    printf("Valor final: ");
    scanf("%d", &valor_final);

    //estrutura de repetição PARA

    for (contador=1;contador<=valor_final;contador = contador + 5)
    {
        printf("%d", contador * 5);
        printf(" - ");

    }

    return 0;
}
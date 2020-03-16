#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{  
    //declaração de variaveis
    float num, raizqd;


    //leitura de valores
    printf("Digite um numero: ");
    scanf("%f", &num);


    //Estrutura condicional
    if(num > 0)
    {
        raizqd = sqrt(num);
        printf("A raiz quadrada do valor é %.2f", raizqd);
    }
    else
    {
        printf("O numero é invalido");
    }

    //impressão dos valores


    return 0;
}
#include<stdio.h>
#include<stdlib.h>
//#include <math.h>

int main()
{  
    //declaração de variaveis
    int A, B, Soma;


    //leitura de valores
    printf("Digite um numero inteiro: ");
    scanf("%d", &A);
    printf("Digite um numero inteiro: ");
    scanf("%d", &B);

    //calculo 
    Soma = A + B;
    printf("O valor da soma é %d \n", Soma);

    if(Soma > 10)
    {
        printf("O valor da soma é maior que 10\n");
    }

    return 0;
}
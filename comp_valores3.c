#include<stdio.h>
#include<stdlib.h>
//#include <math.h>

int main()
{  
    //declaração de variaveis
    int a, b, c, maior, menor;


    //leitura de valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    //calculo dos valores
    //calculo do menor
    menor = a;
    if(b < a && b < c)
    {
        menor = b;
    }
    if(c < a && c < b)
    {
        menor = c;
    }

    //cauculo do maior
    maior = a;
    if(b > a && b > c)
    {
        maior = b;
    }
    if(c > a && c > b)
    {
        maior = c;
    }

    //impressão dos valores
    printf("O maior valor foi: %d\n", maior);
    printf("O menor valor foi: %d", menor);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{  
    //declaração de variaveis
    float comprimento, area_cubo, latas_necessarias, preco_total;


    //leitura de valores
    printf("Digite o comprimento do cubo: ");
    scanf("%f", &comprimento);

    //calculo do tempo
    area_cubo = (5 * (pow(comprimento, 2)));
    latas_necessarias = (area_cubo / 15);
    preco_total = (latas_necessarias * 20);

    //impressão dos valores
    printf("Área cubo: %.2f m²\n", area_cubo);
    printf("Latas de tinta necessarias: %.2f Latas\n", latas_necessarias);
    printf("Preço final: R$ %.2f", preco_total);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
//#include <math.h>
int main()
{   //declaração de variaveis
    int idia, imes, iano, fdia, fmes, fano, dias_final, dias_inicial, res_dias;
    //leitura de variaveis
        //data final
    printf("Dia Final: ");
    scanf("%d", &fdia);
    printf("Mês Final: ");
    scanf("%d", &fmes);
    printf("Ano Final: ");
    scanf("%d", &fano);

    //data inicial
    printf("Dia inicial: ");
    scanf("%d", &idia);
    printf("Mês inicial: ");
    scanf("%d", &imes);
    printf("Ano inicial: ");
    scanf("%d", &iano);

    //contagem de dias
    dias_inicial = ((iano * 360) + (imes * 30) + idia);
    dias_final = ((fano * 360) + (fmes * 30) + fdia);
    res_dias = dias_final - dias_inicial;
    //resultado de dias
    printf("O resultado de dias é: %d", res_dias);

    return 0;
}
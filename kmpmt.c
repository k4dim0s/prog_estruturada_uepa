#include<stdio.h>
#include<stdlib.h>
//#include <math.h>

int main()    scanf("%f", &kmh);
{  
    //declaração de variaveis
    float kmh, mts;

    //leitura de valores
    printf("Quilometros [KM/h]: ");
    scanf("%f", &kmh);
    //printf("Tempo [/h]: ");
    //scanf("%f", &hora);

    //calculo do tempo
    mts = (kmh / 3.6);
    //minutos = ();

    //impressão dos valores
    printf("O valor convertido é %.2f m/s :", mts);

    return 0;
}
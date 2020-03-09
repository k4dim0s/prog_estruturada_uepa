#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    //declaração de variaveis
    float x1, x2, y1, y2, f_distancia, f_distancia2;

    //leitura de variaveis
    printf("Digite o valor de X1: ");
    scanf("%f", &x1);
    printf("Digite o valor de X2: ");
    scanf("%f", &x2);
    printf("Digite o valor de Y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de Y2: ");
    scanf("%f", &y2);

    //potencia = pow(x,2)
    //calculo da formula
    //f_distancia = sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2));
    f_distancia2 = sqrt(pow((y1-x1), 2) + pow((y2 - x2), 2));

    //printf("Resultado: %2.f\n", f_distancia);
    printf("Resultado : %2.f", f_distancia2);

    return 0;

}
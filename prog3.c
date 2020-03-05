#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n1, n2, n3, media;
    printf("Calculo de media: \n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    //media = ((&n1 + &n2 + &n3) / 3);
    media = ((n1 + n2 + n3) / 3);
    printf("Média: %.2f", media);

    //printf("%.2f\n %.2f\n", n1, n2);

    //printf("N1 = %f\n N1 = %f\n", n1, n2);
}
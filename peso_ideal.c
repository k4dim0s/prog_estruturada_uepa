#include<stdio.h>
#include<stdlib.h>

int main()
{
    // declaração de variaveis
    float altura, imc;
    char sexo;

    //input de variaveis
    printf("Digite a sua altura: [MT] ");
    scanf("%f", &altura);
    printf("Digite o seu Sexo: [M/F] ");
    scanf("%s", &sexo);

    //calculo da formula.
    imc = ((72.7 * altura) - 58);

    system("clear");
    //impressão dos resultados
    printf("Altura: %.2f\n", altura);
    printf("Media: %.2f\n", imc);
    printf("Sexo: %c \n", sexo);
    
    return 0;
    
}
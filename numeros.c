#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{   
    //declaração de variaveis
    int n1, n2, n3, soma;
    float raizq, terparte;
    
    //leitura de valores
    printf("Digite o valor 1º: ");
    scanf("%d", &n1);
    printf("Digite o valor 2º: ");
    scanf("%d", &n2);
    printf("Digite o valor 3º: ");
    scanf("%d", &n3);

    //processamento dos valores
    soma = (n1 + n2 + n3);
    raizq = sqrt(soma);
    terparte = (soma / 3.0);  

    //impressão dos valores
    printf("Soma dos valores: %d\n", soma);
    printf("Raiz quadrada dos valores: %.2f\n", raizq);
    printf("Terça parte dos valores: %.2f\n", terparte);

    return 0;
}
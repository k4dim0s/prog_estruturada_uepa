#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, r, qp;
    printf("Digite um valor para ver sua quinta parte: ");
    scanf("%f", &n1);
    r = (n1 * n1);
    qp = (n1 / 5);
    printf("O quadrado de %.1f é %.1f", n1, r);
    printf("\nA quinta parte de %.1f é %.1f",n1, qp);
    return 0;

}
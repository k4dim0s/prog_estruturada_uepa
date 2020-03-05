#include<stdio.h>
#include<stdlib.h>

int main(){
    //declaracao de variaveis
    float gc, gf;
    printf("Digite um valor: ");
    //leitura de variaveis
    scanf("%f", &gc);
    //conversao celsios fahren
    gf = ((gc * 9 / 5) + 32);
    //impressao das variaveis
    printf("%.2f", gf);
    return 0;
//9.0/0=5.0 ) + 32.0
}
#include <stdio.h>
#include <stdlib.h>
/*
20. Fa�a um programa em C que efetue a apresenta��o do valor da convers�o em
real (R$) de um valor lido em d�lar (US$). Para isso, ser� necess�rio tamb�m ler o
valor da cota��o do d�lar
*/


int main()
{
    float real, dolar, cotacao;


    printf("Insira o valor em US$: ");
    scanf("%f", &dolar);
    printf("Insira a cota��o do dolar: ");
    scanf("%f", &cotacao);

    real = cotacao * dolar;

    printf("Valor em R$: %3.2f", real);


    return 0;
}

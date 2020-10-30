#include <stdio.h>
#include <stdlib.h>
/*
20. Faça um programa em C que efetue a apresentação do valor da conversão em
real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
valor da cotação do dólar
*/


int main()
{
    float real, dolar, cotacao;


    printf("Insira o valor em US$: ");
    scanf("%f", &dolar);
    printf("Insira a cotação do dolar: ");
    scanf("%f", &cotacao);

    real = cotacao * dolar;

    printf("Valor em R$: %3.2f", real);


    return 0;
}

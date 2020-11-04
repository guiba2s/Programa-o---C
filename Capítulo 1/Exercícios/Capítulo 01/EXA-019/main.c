#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa em C que calcule o valor de uma prestação em atraso. Para
isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros
e o período de atraso. Ao final, o programa deve imprimir o valor da prestação
atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso,
o valor da prestação acrescido dos juros. Considere juros simples.

Juros simples
*/
int main()
{
    //var locais
    int periodoAtraso;
    float valorVencido, taxaJuros, juros, novoValor;

    //entrada de dados
    printf("Informe o valor da prestação vencida: ");
    scanf("%f", &valorVencido);
    printf("Informe a taxa de juros: ");
    scanf("%f", &taxaJuros);
    printf("Informe o periodo de atraso: ");
    scanf("%d", &periodoAtraso);
    juros = ((valorVencido *(taxaJuros / 100))*periodoAtraso);
    novoValor = valorVencido + juros;
    printf("Valor prestacao: %f \n", valorVencido);
    printf("Periodo de atraso: %d \n", periodoAtraso);
    printf("Juros a ser cobrados: %f \n", juros);
    printf("Valor da prestacao com juros: %.2f", novoValor);

        return 0;
}

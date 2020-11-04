#include <stdio.h>
#include <stdlib.h>
/*
15. Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o
desconto.
*/

int main()
{
    float produtoSemDesconto, desconto, produtoComDesconto;

    //coleta de dados
    printf("Insira o valor do produto: ");
    scanf("%f", &produtoSemDesconto);
    printf("Insira o percentual do desconto: ");
    scanf("%f", &desconto);

    //passar desconto para percentual
    desconto = desconto/100;
    //calculo do desconto
    produtoComDesconto = produtoSemDesconto - (produtoSemDesconto*desconto);

    //converter o desconto novamente para impressão para o usuario
    desconto = desconto * 100;
    printf("Desconto de  %3.2f por cento, e o valor final do produto fica R$: %3.2f", desconto, produtoComDesconto);
    return 0;
}

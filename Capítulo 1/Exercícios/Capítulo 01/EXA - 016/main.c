#include <stdio.h>
#include <stdlib.h>

/*
16. Fa�a um programa em C que calcule o reajuste do sal�rio de um funcion�rio. Para
isso, o programa dever� ler o sal�rio atual do funcion�rio e ler o percentual de
reajuste. Ao final imprimir o valor do novo sal�rio.
*/

int main()
{
    //declaracao de variaveis locais - entradas
    float salarioAntigo, reajuste, salarioNovo;

    //captacao de dados
    printf("Insira o salario atual R$: ");
    scanf("%f", &salarioAntigo);
    printf("Insira o percentual do reajuste: ");
    scanf("%f", &reajuste);

    //calculos
    reajuste = reajuste/100.00; //conversao de percentual para decimal

    salarioNovo = (salarioAntigo * reajuste) + salarioAntigo;

    printf("o novo salario R$: %3.2f", salarioNovo);
    return 0;
}

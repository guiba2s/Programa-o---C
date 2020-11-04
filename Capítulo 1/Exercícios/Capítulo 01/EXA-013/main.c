#include <stdio.h>
#include <stdlib.h>

//13 - Faça um programa em C que leia o saldo de uma conta poupança e imprima o
//novo saldo, considerando um reajuste de 2%.

int main()
{
    float saldoAntigo, saldoNovo, rendimento;

    printf("Insira o novo saldo R$: ");
    scanf("%f", &saldoAntigo);
    rendimento = (saldoAntigo*2)/100;
    saldoNovo = saldoAntigo + rendimento;
    printf("Novo saldo: %3.2f", saldoNovo);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
    8. Faça um programa em C que leia dois números inteiros e imprima a subtração deles
*/

int main()
{
    int a, b, resultado;

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    resultado = a - b;
    printf("O resultado: %d", resultado);

    return 0;
}

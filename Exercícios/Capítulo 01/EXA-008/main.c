#include <stdio.h>
#include <stdlib.h>

/*
    8. Fa�a um programa em C que leia dois n�meros inteiros e imprima a subtra��o deles
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

#include <stdio.h>
#include <stdlib.h>

//9. Fa�a um programa em C que leia um n�mero real e imprima � deste n�mero.

int main()
{
    int a;
    float resultado;

    printf("Insira um algarismo real: ");
    scanf("%d", &a);

    resultado = a/4;
    printf(" 1/4 de %d : %f", a,resultado);
    return 0;
}

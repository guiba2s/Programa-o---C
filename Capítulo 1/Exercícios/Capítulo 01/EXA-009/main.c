#include <stdio.h>
#include <stdlib.h>

//9. Faça um programa em C que leia um número real e imprima ¼ deste número.

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

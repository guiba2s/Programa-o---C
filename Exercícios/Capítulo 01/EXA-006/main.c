#include <stdio.h>
#include <stdlib.h>

//6. Fa�a um programa em C que leia um n�mero inteiro e imprima o seu antecessor e o seu sucessor

int main()
{
    int a;
    printf("Insira um numero: ");
    scanf("%d", &a);
    a++; //sucesspr
    printf("Seu sucessor: %d\n", a);
    a = a - 2;
    printf("Seu antecessor: %d", a);

    return 0;
}

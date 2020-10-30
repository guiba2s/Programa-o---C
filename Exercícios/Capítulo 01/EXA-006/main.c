#include <stdio.h>
#include <stdlib.h>

//6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor

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

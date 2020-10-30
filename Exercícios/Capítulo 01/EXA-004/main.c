#include <stdio.h>
#include <stdlib.h>

//Exercicio 4
//4. Faça um programa em C que leia e imprima um número inteiro.

int main()
{
    int numero;
    printf("Insira um numero:");
    scanf("%d", &numero); //deve sempre passa o endereço do número sintaxe: scanf("formato", &nomeVar)
    printf("numero digitado foi: %d", numero);
    return 0;
}

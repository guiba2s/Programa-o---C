#include <stdio.h>
#include <stdlib.h>

//Exercicio 4
//4. Fa�a um programa em C que leia e imprima um n�mero inteiro.

int main()
{
    int numero;
    printf("Insira um numero:");
    scanf("%d", &numero); //deve sempre passa o endere�o do n�mero sintaxe: scanf("formato", &nomeVar)
    printf("numero digitado foi: %d", numero);
    return 0;
}

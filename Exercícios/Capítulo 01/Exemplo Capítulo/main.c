#include <stdio.h>
#include <stdlib.h>
//Exercício 01
/*Faça um programa em C que receba dois números inteiros e ao final imprima a soma deles*/


int main()
{
    //Declaração de variaveis locais
    int numero1, numero2, soma;

    //inserção de dados no algoritimo
    printf("Insira o primeiro numero:");
    scanf("%d", &numero1);
    printf("insira o segundo numero: ");
    scanf("%d", &numero2);

    //operação matematica
    soma = numero1 + numero2;

    //imprimir o resultado ao usuario
    printf("Resultado: %d", soma);
    return 0;
}

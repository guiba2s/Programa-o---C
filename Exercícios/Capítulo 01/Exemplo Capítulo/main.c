#include <stdio.h>
#include <stdlib.h>
//Exerc�cio 01
/*Fa�a um programa em C que receba dois n�meros inteiros e ao final imprima a soma deles*/


int main()
{
    //Declara��o de variaveis locais
    int numero1, numero2, soma;

    //inser��o de dados no algoritimo
    printf("Insira o primeiro numero:");
    scanf("%d", &numero1);
    printf("insira o segundo numero: ");
    scanf("%d", &numero2);

    //opera��o matematica
    soma = numero1 + numero2;

    //imprimir o resultado ao usuario
    printf("Resultado: %d", soma);
    return 0;
}

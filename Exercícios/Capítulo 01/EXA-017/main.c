#include <stdio.h>
#include <stdlib.h>

/*
17. Fa�a um programa em C que calcule a convers�o entre graus cent�grados e Fahrenheit. Para isso, leia o valor em cent�grados e calcule com base na f�rmula a
seguir. Ap�s calcular o programa deve imprimir o resultado da convers�o.
    Formula: F = (9xC*160)/5
    F - Graus em Fahrenheit
    C - Graus cent�grados
*/

int main()
{
    //variaveis locais
    float c, f;

    //captura dos graus em C
    printf("Informe o valor em graus Celsius: ");
    scanf("%f", &c);

    //conversao
    f = (9*c+160)/5;

    //impress�o da convers�o
    printf("O valor em Fahrenheit: %3.2f", f);

        return 0;
}

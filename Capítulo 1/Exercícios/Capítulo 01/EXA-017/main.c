#include <stdio.h>
#include <stdlib.h>

/*
17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a
seguir. Após calcular o programa deve imprimir o resultado da conversão.
    Formula: F = (9xC*160)/5
    F - Graus em Fahrenheit
    C - Graus centígrados
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

    //impressão da conversão
    printf("O valor em Fahrenheit: %3.2f", f);

        return 0;
}

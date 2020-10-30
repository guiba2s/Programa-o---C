#include <stdio.h>
#include <stdlib.h>

//10 - Faça um programa em C que leia três números reais e calcule a média aritmética
//destes números. Ao final, o programa deve imprimir o resultado do cálculo
int main()
{
    int a, b, c, mediaAritmetica;

    printf("insira o tres numeros: ");
    scanf("%d %d %d", &a,&b,&c);

    mediaAritmetica = (a+b+c)/3;
    printf("Resultado: %d", mediaAritmetica);

    return 0;
}

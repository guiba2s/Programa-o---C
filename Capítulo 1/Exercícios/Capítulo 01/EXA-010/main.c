#include <stdio.h>
#include <stdlib.h>

//10 - Fa�a um programa em C que leia tr�s n�meros reais e calcule a m�dia aritm�tica
//destes n�meros. Ao final, o programa deve imprimir o resultado do c�lculo
int main()
{
    int a, b, c, mediaAritmetica;

    printf("insira o tres numeros: ");
    scanf("%d %d %d", &a,&b,&c);

    mediaAritmetica = (a+b+c)/3;
    printf("Resultado: %d", mediaAritmetica);

    return 0;
}

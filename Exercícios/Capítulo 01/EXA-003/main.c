#include <stdio.h>
#include <stdlib.h>

//Exercício 3
//Faça um programa em C que imprima a média aritmética entre os números 5, 8,12

int main()
{
    float a,b,c, media;
    a = 5;
    b = 8;
    c = 12;

    media = (5+8+12)/3;

    printf("Resultado: %f", media);
    //resposta real é 8.3333
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
14. Fa�a um programa em C que leia a base e a altura de um ret�ngulo e imprima o
per�metro (base + altura) e a �rea (base * altura)
*/

int main()
{
    int base, altura;
    float perimetro, area;

    //coleta de dados
    printf("Insira a base do triangulo: ");
    scanf("%d", &base);
    printf("Insira a altura do triangulo: ");
    scanf("%d", &altura);

    //calculo do perimetro
    perimetro = base + altura;

    //calculo da area
    area = base * altura;

    //informa��o para o usuario
    printf("Perimetro: %3.2f\n", perimetro);
    printf("Area do triangulo %3.2f", area);

    return 0;
}

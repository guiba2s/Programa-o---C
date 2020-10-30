#include <stdio.h>
#include <stdlib.h>

/*
14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura)
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

    //informação para o usuario
    printf("Perimetro: %3.2f\n", perimetro);
    printf("Area do triangulo %3.2f", area);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*11 - Faça um programa em C que leia dois números reais e calcule as quatro operações
básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
final, o programa deve imprimir os resultados dos cálculos.
*/

int main()
{
    int a, b;
    int adicao, subtracao, divisao, multiplicacao;

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    adicao = a+b;
    subtracao = a-b;
    divisao = a/b;
    multiplicacao = a*b;

    printf(" 01-Adicao: %d\n 02-Subtracao: %d\n 03-Divisao: %d\n 04-Multiplicacao: %d", adicao,subtracao,divisao,multiplicacao);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*11 - Fa�a um programa em C que leia dois n�meros reais e calcule as quatro opera��es
b�sicas entre estes dois n�meros, adi��o, subtra��o, multiplica��o e divis�o. Ao
final, o programa deve imprimir os resultados dos c�lculos.
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

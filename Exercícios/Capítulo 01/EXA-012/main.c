#include <stdio.h>
#include <stdlib.h>
/*
12. Fa�a um programa em C que leia um n�mero real e calcule o quadrado deste
n�mero. Ao final, o programa deve imprimir o resultado do c�lculo.
*/
int main()
{
    int real;

    //captura de dados
    printf("Insira um numero real: ");
    scanf("%d", &real);

    //operacao matematica
    real *= real; // => real = real * real que � o numero ao quadrado

    printf("Resultado: %d", real);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
12. Faça um programa em C que leia um número real e calcule o quadrado deste
número. Ao final, o programa deve imprimir o resultado do cálculo.
*/
int main()
{
    int real;

    //captura de dados
    printf("Insira um numero real: ");
    scanf("%d", &real);

    //operacao matematica
    real *= real; // => real = real * real que é o numero ao quadrado

    printf("Resultado: %d", real);



    return 0;
}

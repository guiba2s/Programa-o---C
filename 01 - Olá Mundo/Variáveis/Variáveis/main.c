#include <stdio.h>
#include <stdlib.h>

//declaração de variaveis globais

int contador = 1;
int valor1 = 1;
int valor2 = 2;
int resultado;
int totalSom;
int totalMult;
int resultado;

int main()
{
    totalSom = valor1 + valor2;
    totalMult = valor1*valor2;
    resultado;

    contador++; //recebe incremento de mais um
    resultado = (totalMult + totalSom) * contador;

    printf("Total Soma 1:%d\n", totalSom);
    printf("Total Multiplicão:%d\n", totalMult);
    printf("Total Resultado:%d\n", resultado);

    //totalSom = totalSom + (valor1 - valor2); é o mesmo que:
    totalSom += valor1 - valor2;

    printf("Total Soma 2: %d\n", totalSom);
    return 0;
}

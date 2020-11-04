#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa em C que calcule a quantidade de litros de combust�vel consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combust�vel. O programa dever� ler o tempo decorrido na viagem e a
velocidade m�dia e aplicar as f�rmulas:

D = T*V
L = D/12

em que:
D = Dist�ncia percorrida em horas
T = Tempo decorrido
V = Velocidade M�dia
L = Litros de combust�vel consumidos

Ao final, o programa dever� imprimir a dist�ncia percorrida e a quantidade de
litros consumidos na viagem.
*/

int main()
{
    int d, l, t, v;

    //entrada
    printf("Informe o tempo de duracao da viagem em horas: ");
    scanf("%d", &t);
    printf("Informe a velocidade media em KM/Hora: ");
    scanf("%d", &v);

    //calculo da distancia percorrida em hora
    d = t*v;
    //calculo de combustivel consumido
    l = d/12;

    //imprimir informacoes para o usuario
    printf("Distancia percorrida foi de: %d KM\n", d);
    printf("O combustivel consumido foi de: %d litros", l);
    return 0;
}

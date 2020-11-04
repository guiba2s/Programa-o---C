#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combustível. O programa deverá ler o tempo decorrido na viagem e a
velocidade média e aplicar as fórmulas:

D = T*V
L = D/12

em que:
D = Distância percorrida em horas
T = Tempo decorrido
V = Velocidade Média
L = Litros de combustível consumidos

Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
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

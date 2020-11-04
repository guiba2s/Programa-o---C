/*
 ============================================================================
 Name        : Atividade 22
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Construa um programa que leia o percurso em quilómetros, o tipo do carro e
				informe o consumo estimado de combustível, sabendo-se que um carro tipo C
				faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 kmpor litro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int percurso, tipoCarro;
	float consumoCombustivel;

	setbuf(stdout, NULL);

	printf("Informe o percusso desejado: ");
	scanf("%d", &percurso);
	printf("Digite o tipo de carro \nTipo A - Digite 1 \nTipo B - Digite 2 \nTipo C - Digite 3 \n");
	scanf("%d", &tipoCarro);


	switch(tipoCarro)
	{
		case 1://Carro tipo A - 12km/L
			consumoCombustivel = percurso/12;
			printf("Consumo estimado: %.2f Litros", consumoCombustivel);
			break;

		case 2://Carro tipo B - 9Km/L
			consumoCombustivel = percurso/9;
			printf("Consumo estimado: %.2f Litros", consumoCombustivel);
			break;

		case 3://Carro tipo C - 8Km/L
			consumoCombustivel = percurso/8;
			printf("Consumo estimado: %.2f Litros", consumoCombustivel);
			break;

		default:
			printf("Digite um tipo válido");
			break;
	}
}

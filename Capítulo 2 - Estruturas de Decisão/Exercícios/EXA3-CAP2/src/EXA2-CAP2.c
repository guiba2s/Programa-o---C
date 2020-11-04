/*
 ============================================================================
 Name        : EXA2-CAP2.c
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa em C que receba um número inteiro e verifique se este número é
				maior que 20, em caso afirmativo o programa deverá multiplicar o valor por 2 e após
				o cálculo imprimir a mensagem: "Resultado: <valor do resultado>", em que <valor do
				resultado> deve ser substituído pelo resultado do cálculo.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero, resultado;

	setbuf(stdout, NULL);

	printf("Digite um número inteiro: "); /* prints;  */
	scanf("%d", &numero);

	if(numero > 20) resultado = numero*2;

	printf("Resultado: %d", resultado);

	return EXIT_SUCCESS;
}

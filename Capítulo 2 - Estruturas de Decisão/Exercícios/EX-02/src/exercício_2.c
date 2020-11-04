/*
 ============================================================================
 Name        : Exercício 2
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	2 - Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o
					valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
					mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
					subtraindo-se 5

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int valor1, valor2, adicao;

	setbuf(stdout, NULL);

	printf("Digite um número inteiro: "); /* prints;  */
	scanf("%d", &valor1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &valor2);

	adicao = valor1 + valor2;

	if(adicao > 20)
	{
		adicao += 8;
	}
	else{
		adicao -= 5;
	}
	printf("Resultado: %d", adicao);

	return EXIT_SUCCESS;
}

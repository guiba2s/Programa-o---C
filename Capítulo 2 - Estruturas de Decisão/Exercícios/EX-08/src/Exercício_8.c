/*
 ============================================================================
 Name        : Atividade 8
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa que leia um número e imprima uma das mensagens: "Maior
				do que 20", "Igual a 20"ou "Menor do que 20".

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;

	setbuf(stdout, NULL);

	printf("Digite um número: ");
	scanf("%d", &numero);

	if(numero > 20) printf("Maior que 20");
	else if(numero == 20) printf("Igual a 20");
	else printf("Menor que 20");

	return EXIT_SUCCESS;
}

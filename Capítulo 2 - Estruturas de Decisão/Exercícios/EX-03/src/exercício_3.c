/*
 ============================================================================
 Name        : Exercício 3
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa que leia um número e imprima uma das duas mensagens: "É
				múltiplo de 3"ou "Não é múltiplo de 3".

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int multiplo;
	printf("Digite um número: ");
	scanf("%d", &multiplo);

	if((multiplo % 3) == 0) printf("O número é multiplo de 3");
	else printf("O número não é multiplo de 3");


	return EXIT_SUCCESS;
}

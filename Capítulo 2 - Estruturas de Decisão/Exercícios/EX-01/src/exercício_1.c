/*
 ============================================================================
 Name        : Atividade 1
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	1 - Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
				caso o resultado seja maior que 10, apresentá-lo.


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero1, numero2, adicao;

	setbuf(stdout, NULL);

	printf("Digite um número inteiro: "); /* prints;  */
	scanf("%d", &numero1);
	printf("Digite outro número inteiro: "); /* prints;  */
	scanf("%d", &numero2);

	adicao = numero1 + numero2;

	if(adicao > 10) printf("Resultado: %d", adicao);


	return EXIT_SUCCESS;
}

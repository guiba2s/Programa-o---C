/*
 ============================================================================
 Name        : Atividade 4
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa que leia um número e informe se ele é ou não divisível por 5.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero;
	setbuf(stdout, NULL);

	printf("Digite um número inteiro: "); /* prints;  */
	scanf("%d", &numero);


	if((numero%5)==0) printf("número é divisivel por 5");
	else printf("número não é divisivel por 5");


	return EXIT_SUCCESS;
}

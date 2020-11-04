/*
 ============================================================================
 Name        : EXA1-CAP2.c
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :
 	 	Faça um programa em C que receba um número inteiro e verifique se este número é
		maior que 20, em caso afirmativo o programa deverá imprimir a mensagem: "Maior
		que 20".
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;

	setbuf(stdout, NULL);//comando para corrigir bug ao utilizar scanf depois do printf

	printf("Insira um número: ");
	scanf("%d", &numero);

	if(numero > 20) printf("número maior que 20");

	return 0;
}

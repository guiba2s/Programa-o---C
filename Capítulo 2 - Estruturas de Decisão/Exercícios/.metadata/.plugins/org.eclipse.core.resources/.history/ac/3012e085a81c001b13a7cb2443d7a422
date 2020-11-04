/*
 ============================================================================
 Name        : Atividade 10
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa em C que leia três números inteiros e imprima os três em
				ordem crescente.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero1, numero2, numero3;

	setbuf(stdout, NULL);

	printf("Informe o primeiro número: ");
	scanf("%d", &numero1);
	printf("Informe o segundo número: ");
	scanf("%d", &numero2);
	printf("Informe o terceiro número: ");
	scanf("%d", &numero3);


	if((numero1 < numero2)&&(numero1 <numero3))
	{
		if(numero2 < numero3)
		{
			printf("Ordem: %d %d %d", numero1, numero2, numero3);
		}
		else
		{
			printf("Ordem: %d %d %d", numero1, numero3, numero2);
		}
	}
	else if ((numero2 < numero1)&&(numero2 < numero3))
	{
		if(numero1<numero3)
		{
			printf("Ordem: %d %d %d", numero2, numero1, numero3);
		}
		else
		{
			printf("Ordem: %d %d %d", numero2, numero3, numero1);

		}
	}
	else
	{
		if(numero1<numero2)
		{
			printf("Ordem: %d %d %d", numero3, numero1, numero2);
		}
		else
		{
			printf("Ordem: %d %d %d", numero3, numero2, numero1);

		}

	}
}

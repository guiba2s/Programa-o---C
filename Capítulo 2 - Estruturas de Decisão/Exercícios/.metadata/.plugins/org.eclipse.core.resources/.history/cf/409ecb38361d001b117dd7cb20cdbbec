/*
 ============================================================================
 Name        : Atividade 7
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa em C que leia um número e indique se o
 número está compreendido entre 20 e 50 ou não.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;
	float salario, credito, prestacao;

	setbuf(stdout, NULL);


	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
	printf("Digite o valor do crédito que deseja: ");
	scanf("%f", &credito);
	printf("Digite a quantidade de parcelas que deseja: ");
	scanf("%d", &parcelas);


	prestacao = credito/parcelas;

	if(prestacao > (salario*0.3)) printf("Crédito não aprovado");

	else printf("Parabéns! Seu crédito foi aprovado");

	return EXIT_SUCCESS;
}

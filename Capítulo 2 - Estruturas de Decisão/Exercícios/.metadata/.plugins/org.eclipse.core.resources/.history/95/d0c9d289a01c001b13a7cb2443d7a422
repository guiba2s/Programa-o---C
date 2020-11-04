/*
 ============================================================================
 Name        : Atividade 6
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
				estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
				bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
				e o valor da prestação e informar se o empréstimo pode ou não ser concedido.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int parcelas;
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

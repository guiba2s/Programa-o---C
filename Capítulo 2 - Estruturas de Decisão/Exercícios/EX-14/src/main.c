/*
 ============================================================================
 Name        : Atividade 14
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça umprograma que permita entrar com o salário de uma pessoa e imprima o
				desconto do INSS segundo a tabela seguir:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float salario, salarioComDesconto;

	setbuf(stdout, NULL);


	printf("Informe seu salário: ");
	scanf("%f", &salario);

	if(salario <= 600)
	{
		printf("Isento de desconto, salário é de %3.2f", salario);
	}
	else if(salario>600 && salario<= 1200)
	{
		salarioComDesconto = salario - (salario * 0.2);
		printf("Salário será de: %3.2f com desconto de 20%", salarioComDesconto);
	}
	else if(salario>1200 && salario<= 2000)
	{
		salarioComDesconto = salario - (salario * 0.25);
		printf("Salário será de: %3.2f com desconto de 25%", salarioComDesconto);
	}
	else
	{
		salarioComDesconto = salario - (salario * 0.3);
		printf("Salário será de: %3.2f com desconto de 30%", salarioComDesconto);
	}
}

/*
 ============================================================================
 Name        : Atividade 17
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Depois da liberação do governo para as mensalidades dos planos de saúde, as
				pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
				caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um
				programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
				valor que ela deverá pagar.

					Idade Valor
				Até 10 anos R$30,00
				Acima de 10 até 29 anos R$60,00
				Acima de 29 até 45 anos R$120,00
				Acima de 45 até 59 anos R$150,00
				Acima de 59 até 65 anos R$250,00
				Maior que 65 anos R$400,00
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int idade;
	char nome[30];

	setbuf(stdout, NULL);

	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if(idade <= 10)
	{
		printf("%s deverá pagar R$ 30,00", nome);
	}
	else if(idade > 10 && idade <= 29)
	{
		printf("%s deverá pagar R$ 60,00", nome);
	}
	else if(idade > 29 && idade <= 45)
	{
		printf("%s deverá pagar R$ 120,00", nome);
	}
	else if(idade > 45 && idade <= 59)
	{
		printf("%s deverá pagar R$ 150,00", nome);
	}
	else if(idade > 59 && idade <= 65)
	{
		printf("%s deverá pagar R$ 250,00", nome);
	}
	else
	{
		printf("%s deverá pagar R$ 400,00", nome);
	}
}

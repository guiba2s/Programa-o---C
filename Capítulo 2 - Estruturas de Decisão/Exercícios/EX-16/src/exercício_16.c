/*
 ============================================================================
 Name        : Atividade 16
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	A confederação brasileira de natação irá promover eliminatórias para o próximo
				mundial. Faça um programa em C que receba a idade de um nadador e imprima
				a sua categoria segundo a tabela a seguir:

					Categoria Idade
				Infantil A 5 - 7 anos
				Infantil B 8 - 10 anos
				Juvenil A 11 - 13 anos
				Juvenil B 14 - 17 anos
				Sênior maiores de 18 anos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int idade;

	setbuf(stdout, NULL);


	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if(idade <= 7)
	{
		printf("Categoria Infantil - A");
	}
	else if(idade >= 8 && idade <= 10)
	{
		printf("Categoria Infantil - B");
	}
	else if(idade >= 11 && idade <= 13)
	{
		printf("Categoria Juvenil - A");
	}
	else if(idade >= 14 && idade <= 17)
	{
		printf("Categoria Juvenil - B");
	}
	else
	{
		printf("Categoria Senior");
	}
}

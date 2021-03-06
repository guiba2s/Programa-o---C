/*
 ============================================================================
 Name        : Atividade 9
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa em C que permita entrar com o ano de nascimento da pessoa
				e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
				de verificar se o ano de nascimento informado é válido
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int anoNascimento, anoAtual, idadePessoa;

	setbuf(stdout, NULL);

	printf("Informe o ano de seu nascimento:");
	scanf("%d", &anoNascimento);
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);

	//calcular idade da pessoa
	idadePessoa = anoAtual - anoNascimento;

	if(anoNascimento > 0 && anoNascimento <= anoAtual)
	{
		printf("Sua idade é: %d", idadePessoa);
	}
	else
	{
		printf("Informe um ano válido na próxima");
	}
	return EXIT_SUCCESS;
}

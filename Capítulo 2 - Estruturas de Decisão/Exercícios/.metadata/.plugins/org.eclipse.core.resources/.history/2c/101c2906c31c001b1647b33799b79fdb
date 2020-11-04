/*
 ============================================================================
 Name        : Atividade 13
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
				prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
				da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
				"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
				demais em prova final).

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char nome[30], resultadoFinal[30];
	float nota1, nota2, mediaAluno;

	setbuf(stdout, NULL);


	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Valor do resultado da primeira prova: ");
	scanf("%f", &nota1);
	printf("Valor do resultado da segunda nota: ");
	scanf("%f", &nota2);

	mediaAluno = (nota1 + nota2)/2;
	printf("Resultados\n");
	printf("Aluno: %s obteve %3.2f e %3.2f sua média final ficou %3.2f\n", nome, nota1, nota2, mediaAluno);

	if(mediaAluno >= 7)
	{
		printf("Aluno Aprovado");
	}
	else if(mediaAluno <= 3)
	{
		printf("Aluno Reprovado");
	}
	else
	{
		printf("Aluno de prova Final");
	}

}

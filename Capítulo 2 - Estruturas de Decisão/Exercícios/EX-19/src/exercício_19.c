/*
 ============================================================================
 Name        : Atividade 19
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Emumcampeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
				para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
				mesmo número de pontos, criar um programa em C que informe se uma equipe
				foi classificada, de acordo com a seguinte especificação:
				• Ler os pontos obtidos por cada jogador da equipe;
				• Mostrar esses valores em ordem decrescente;
				• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
				entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float n1, n2, n3;

	setbuf(stdout, NULL);

	printf("Digite os pontos do primeiro atleta: ");
	scanf("%f",&n1);
	printf("Digite os pontos do segundo atleta: ");
	scanf("%f",&n2);
	printf("Digite os pontos do terceiro atleta: ");
	scanf("%f",&n3);

	if (n1 < n2 && n1 < n3)
	{
		if (n2 < n3)
			printf("%f, %f, %f", n1, n2, n3);

		else
			printf("%f, %f, %f", n1, n3, n2);
	 }
	else if (n2 < n1 && n2 < n3) {
		if (n1 < n3)
			printf("%f, %f, %f", n2, n1, n3);
		else
			printf("%f, %f, %f", n2, n3, n1);
	}
	else {
		if (n2 < n1)
			printf("%f, %f, %f", n3, n2, n1);
		else
			printf("%f, %f, %f", n3, n1, n2);
	}

	float media = (n1 + n2 + n3) / 3;

	if ((n1 + n2 + n3) >= 100)
		printf("\n%.2f", media);

	else
		printf("\nEquipe desclassificada");
}

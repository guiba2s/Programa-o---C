/*
 ===============================================================================================================
 Name        : Atividade 25
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :
				A prefeitura contratou uma firma especializada para manter os níveis de poluição
				considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis
				pela poluição, foram classificadas em três grupos. Sabendo-se que a escala
				utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um
				programa que possa imprimir intimações de acordo com o índice e a tabela a
				seguir:
				
				Índice 				Indústrias que receberão intimação
				0,3 						1º gurpo
				0,4 						1º e 2º grupos
				0,5 						1º, 2º e 3º grupos
				
				
 =============================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float indicePoluicao;
	
	setbuf(stdout, NULL);
	
	printf("Digite o índice de poluição: \n");
	scanf("%f", &indicePoluicao);
	
	if(indicePoluicao >= 0.5)
	{
		printf("Suspender atividades das industrias dos grupos 1, 2 e 3 \n");
	}
	else if(indicePoluicao >= 0.4)
	{
		printf("Suspender atividades das industrias dos grupos 1 e 2 \n");
	}
	else
	{
		printf("Indice de poluição aceitavel para todos os grupos");
	}
}

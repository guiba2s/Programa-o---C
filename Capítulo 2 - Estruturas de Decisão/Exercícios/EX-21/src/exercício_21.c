/*
 ============================================================================
 Name        : Atividade 21
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
				livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
				um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
				para devolver o livro e o aluno só três dias.
				• Nome do livro:
				• Tipo de usuário:
				• Total de dias:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char nome[30];
	int tipoUsuario;

	setbuf(stdout, NULL);

	printf("Digite o nome do livro: ");
	scanf("%s",&nome);
	printf("-Digite o tipo de usuário-\n");
	printf(" 1 - ALuno\n 2 - Professor\n");
	scanf("%d", &tipoUsuario);

	//exemplo com switch
	/*
	switch(tipoUsuario)
	{
		case 1://tipo aluno selecionado
			printf("Nome do Livro: %s \nTipo de usuário: Aluno \nTotal de dias: 3", nome);
			break;

		case 2://tipo professor selecionado
			printf("Nome do Livro: %s \nTipo de usuário: Professor \nTotal de dias: 10");
			break;

		default:
			printf("Digite um tipo válido");
			break;
	}
*/
	//exemplo com if
	if(tipoUsuario == 1)
	{
		printf("Nome do Livro: %s \nTipo de usuário: Aluno \nTotal de dias: 3", nome);
	}
	else if(tipoUsuario == 2)
	{
		printf("Nome do Livro: %s \nTipo de usuário: Professor \nTotal de dias: 10",nome);
	}
	else
	{
		printf("Digite um tipo válido");
	}

}

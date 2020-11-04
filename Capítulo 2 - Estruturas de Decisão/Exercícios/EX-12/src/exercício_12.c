/*
 ============================================================================
 Name        : Atividade 12
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Faça um programa que leia a idade de uma pessoa e informe:
					• Se é maior de idade
					• Se é menor de idade
					• Se é maior de 65 anos

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define maiorIdade 	18
#define idoso 		65

int main(void) {
	int idade;

	setbuf(stdout, NULL);

	printf("Informe sua idade: ");
	scanf("%d", &idade);
	/*
	 * Código otimizado
	if(idade < maiorIdade) printf("Você é menor de idade");
	else if((idade  >= maiorIdade)&&(idade <= idoso)) printf("Voce é maior de idade");
	else printf("Você é idoso!");
	*/
	//código mais didático
	if(idade < maiorIdade)
		{
			printf("Você é menor de idade");
		}
	else if((idade  >= maiorIdade)&&(idade <= idoso))
		{
			printf("Voce é maior de idade");
		}
	else
		{
			printf("Você é idoso!");
		}
}

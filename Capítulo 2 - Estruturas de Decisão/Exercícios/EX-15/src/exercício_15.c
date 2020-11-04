/*
 ============================================================================
 Name        : Atividade 15
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
				o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
				Faça um programa em C que leia o valor do produto e imprima o valor da venda

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float precoProduto, precoProdutoDesconto;

	setbuf(stdout, NULL);


	printf("Informe o valor do produto: ");
	scanf("%f", &precoProduto);

	if(precoProduto < 20)
	{
		precoProdutoDesconto = precoProduto + (precoProduto * 0.45);
	}
	else
	{
		precoProdutoDesconto = precoProduto + (precoProduto * 0.30);
	}

	printf("Valor do produto para venda: %.2f", precoProdutoDesconto);
}

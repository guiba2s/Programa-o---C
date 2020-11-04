/*
 ============================================================================
 Name        : Atividade 20
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :	O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
				de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
				médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
				O programa deve imprimir uma mensagem informando o saldo médio e o valor
				de crédito.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float saldoMedio;

	setbuf(stdout, NULL);

	printf("Digite seu saldo médio: ");
	scanf("%f",&saldoMedio);

	if(saldoMedio <= 500)
	{
		printf("Nenhum crédito será liberado");
	}
	else if((saldoMedio > 500) && (saldoMedio <= 1000))
	{
		printf("Saldo: %.2f Crédito: %.2f", saldoMedio, saldoMedio * 0.3);
	}
	else if((saldoMedio > 1000) && (saldoMedio <= 3000))
	{
		printf("Saldo: %.2f Crédito: %.2f", saldoMedio, saldoMedio * 0.4);

	}
	else
	{
		printf("Saldo: %.2f Crédito: %.2f", saldoMedio, saldoMedio * 0.5);
	}

}

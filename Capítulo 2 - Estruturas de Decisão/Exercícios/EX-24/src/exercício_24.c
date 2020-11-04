/*
 ===============================================================================================================
 Name        : Atividade 24
 Author      : Guilherme
 Version     :
 Copyright   : 
 Description :
				A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar
				dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro
				deve ser renovado é determinado pelo último número da placa do mesmo, faça
				umprograma que, a partir da leitura da placa do carro, informe omês emque o
				emplacamento deve ser renovado.
 =============================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int placa, milhar, centena, dezena;

	setbuf(stdout, NULL);

	printf("Digite o numero da placa do carro no formato <9999>: ");
	scanf("%d", &placa);
	milhar = placa / 1000;
	placa = placa - (milhar * 1000);
	centena = placa / 100;
	placa = placa - (centena * 100);
	dezena = placa / 10;
	placa = placa - (dezena * 10);
	printf("Mes: %d", placa);
}

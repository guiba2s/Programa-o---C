#include <stdio.h>
#include <stdlib.h>

//7 - Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imrpima esses dados

int main()
{
    char nome[30], telefone[30]; //criar vetores de tamanho 30

    //impressao e captura de dados
    printf("Insira seu nome: ");
    fgets(nome, 30, stdin);
    printf("Insira seu telefone: ");
    fgets(telefone, 30, stdin);

    //impressão dos dados
    //printf("O nome: %sO telefone: %s", nome, telefone);
    printf("O nome: %s", nome);
    printf("O telefone: %s", telefone);
    return 0;
}

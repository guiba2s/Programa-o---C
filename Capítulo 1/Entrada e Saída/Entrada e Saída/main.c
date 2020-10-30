#include <stdio.h>
#include <stdlib.h>

int main()
{   //exemplo de printf
    float total = 300 + 400;
    printf("Total da conta: %2.2f\n", total);

    //exemplo de printf com 3 parametros
    int mat = 335642;
    float medF = 7;
    printf("Matrícula: %d, Média Final: %2.2f\n", mat, medF);

    //exemplo de scanf - usado para capturar dados do teclado - !!!não recomendado para captura de textos
    int nota1;
    int nota2;
    scanf("%d %d", &nota1, &nota2);
    printf("nota1: %d, nota2: %d", nota1, nota2);

    //exemplo fgets
    char produto[30]; //vetor com 30 posições para prencher um texto
    printf("Informe o nome do produto: \n");
    fgets(produto, 30, stdin);
    printf("Produto: %s \n", produto);
    return 0;
}

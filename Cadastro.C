#include <stdio.h>

int main()
{
    char nome[100];
    int idade, semestre;
    float altura;
    
    printf("Vamos fazer sua ficha de cadastro\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite em qual semestre você está: ");
    scanf("%d", &semestre);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    printf("\n==============================\n");
    printf("       FICHA DE CADASTRO\n");
    printf("==============================\n");
    printf("Nome:        %s\n", nome);
    printf("Idade:       %d anos\n", idade);
    printf("Semestre:    %d\n", semestre);
    printf("Altura:      %.2f m\n", altura),
    printf("==============================\n");

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definindo variáveis separadas para cada atributo da cidade.
    char codigo_cidade[4]="";
    char nome[50]="";
    int populacao,numero_pontos_turisticos=0;
    float area, PIB=0;
    
    // Cadastro das Cartas: Entrada de dados
    printf("Insira o código da cidade: ");
    scanf("%s", codigo_cidade);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome);

    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira o Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    printf("Insira a área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);
    
    // Exibição dos Dados das Cartas: Saida Formatada
    
    printf("A Seguinte carta foi cadastrada com sucesso.\n");
    printf("Código da Cidade: %.3s\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d habitantes\n", populacao);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);
    printf("Área: %.2f m²\n", area);
    printf("PIB: %.2f\n", PIB);

    return 0;
}

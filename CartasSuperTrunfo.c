#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definindo variáveis separadas para cada atributo da cidade.
    char codigo_cidade[3], nome[50];
    int populacao,numero_pontos_turisticos;
    float area, PIB;
    
    // Cadastro das Cartas: Entrada de dados
    printf("Insira o código da cidade: ex.: A01");
    scanf("%s", &codigo_cidade);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nome);

    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira o Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    printf("Insira a área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);
    
    // Exibição dos Dados das Cartas: Saida Formatada
    


    return 0;
}

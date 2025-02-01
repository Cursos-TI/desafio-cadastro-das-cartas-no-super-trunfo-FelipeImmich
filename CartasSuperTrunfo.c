#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Defindo a funcao de exibir a carta

void printcarta(char a[4] ,char b[50],int c,int d, float e, float f,float g, float h){

    printf("Código da Cidade: %.3s\n", a);
    printf("Nome da cidade: %s\n", b);
    printf("População da cidade: %d habitantes\n", c);
    printf("Número de pontos turísticos: %d\n", d);
    printf("Área: %.2f m²\n", e);
    printf("PIB: %.2f\n", f);
    printf("Densidade Populacional: %.2f\n",g);
    printf("PIB per capita: %.2f\n",h);
}

//Iniciando

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

    // Calculando densidade populacional e PIB per capita

    float den_pop = (float) populacao / area;
    float pib_cap = (float) PIB / populacao;
    
    // Exibição dos Dados das Cartas: Saida Formatada

    printf("\nA Seguinte carta foi cadastrada com sucesso.\n\n");
    printcarta(codigo_cidade,nome,populacao,numero_pontos_turisticos,area,PIB,den_pop,pib_cap);

    return 0;
}

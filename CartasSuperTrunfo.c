#include <stdio.h>

typedef struct {
    char codigo_cidade[4];
    char nome[50];
    int populacao, numero_pontos_turisticos;
    float area, PIB, densidade, PIB_CAP, super_poder;
} Carta;

// Função de exibir a carta
void printcarta(Carta carta){
    printf("Código da Cidade: %.3s\n", carta.codigo_cidade);
    printf("Nome da cidade: %s\n", carta.nome);
    printf("População da cidade: %d habitantes\n", carta.populacao);
    printf("Número de pontos turísticos: %d\n", carta.numero_pontos_turisticos);
    printf("Área: %.2f m²\n", carta.area);
    printf("PIB: %.2f\n", carta.PIB);
    printf("Densidade Populacional: %.2f\n", carta.densidade);
    printf("PIB per capita: %.2f\n", carta.PIB_CAP);
    printf("Super Poder: %.2f\n\n", carta.super_poder);
}

// Função para cadastrar a carta
Carta cadastrar_carta() {
    Carta carta;
    
    printf("Insira o código da cidade: ");
    scanf("%s", carta.codigo_cidade);

    printf("Insira o nome da cidade: ");
    scanf("%s", carta.nome);

    printf("Insira a população: ");
    scanf("%d", &carta.populacao);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &carta.numero_pontos_turisticos);

    printf("Insira a área: ");
    scanf("%f", &carta.area);

    printf("Insira o PIB: ");
    scanf("%f", &carta.PIB);

    // Calculando densidade populacional e PIB per capita
    carta.densidade = (float) carta.populacao / carta.area;
    carta.PIB_CAP = (float) carta.PIB / carta.populacao;

    // Calculando o Super Poder
    carta.super_poder = carta.populacao + carta.numero_pontos_turisticos + carta.area + carta.PIB + carta.densidade + carta.PIB_CAP;
    
    return carta;
}

// Função para comparar duas cartas
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\nComparação entre %s e %s\n", carta1.nome, carta2.nome);

    // Comparação da densidade populacional (vence o menor valor)
    if (carta1.densidade < carta2.densidade)
        printf("Densidade Populacional: %s vence\n", carta1.nome);
    else if (carta1.densidade > carta2.densidade)
        printf("Densidade Populacional: %s vence\n", carta2.nome);
    else
        printf("Densidade Populacional: Empate\n");

    // Comparação das outras propriedades (vence o maior valor)
    if (carta1.populacao > carta2.populacao)
        printf("População: %s vence\n", carta1.nome);
    else if (carta1.populacao < carta2.populacao)
        printf("População: %s vence\n", carta2.nome);
    else
        printf("População: Empate\n");

    if (carta1.numero_pontos_turisticos > carta2.numero_pontos_turisticos)
        printf("Número de Pontos Turísticos: %s vence\n", carta1.nome);
    else if (carta1.numero_pontos_turisticos < carta2.numero_pontos_turisticos)
        printf("Número de Pontos Turísticos: %s vence\n", carta2.nome);
    else
        printf("Número de Pontos Turísticos: Empate\n");

    if (carta1.area > carta2.area)
        printf("Área: %s vence\n", carta1.nome);
    else if (carta1.area < carta2.area)
        printf("Área: %s vence\n", carta2.nome);
    else
        printf("Área: Empate\n");

    if (carta1.PIB > carta2.PIB)
        printf("PIB: %s vence\n", carta1.nome);
    else if (carta1.PIB < carta2.PIB)
        printf("PIB: %s vence\n", carta2.nome);
    else
        printf("PIB: Empate\n");

    if (carta1.PIB_CAP > carta2.PIB_CAP)
        printf("PIB per Capita: %s vence\n", carta1.nome);
    else if (carta1.PIB_CAP < carta2.PIB_CAP)
        printf("PIB per Capita: %s vence\n", carta2.nome);
    else
        printf("PIB per Capita: Empate\n");

    if (carta1.super_poder > carta2.super_poder)
        printf("Super Poder: %s vence\n", carta1.nome);
    else if (carta1.super_poder < carta2.super_poder)
        printf("Super Poder: %s vence\n", carta2.nome);
    else
        printf("Super Poder: Empate\n");
}

    // Inicio
int main() {

    //Quantidade de cartas
    int num_cartas = 2;
    Carta cartas[num_cartas];
    
    //Loop para cadastrar todas
    for (size_t i = 0; i < num_cartas; i++){
        cartas[i] = cadastrar_carta();
        printf("\nA Seguinte carta foi cadastrada com sucesso.\n\n");
        printcarta(cartas[i]);
    }
    
    // Comparando duas cartas de exemplo (por exemplo, cartas 0 e 1)
    if (num_cartas >= 2) {
        comparar_cartas(cartas[0], cartas[1]);
    } else {
        printf("Você precisa cadastrar pelo menos duas cartas para comparar.\n");
    }

    return 0;
}

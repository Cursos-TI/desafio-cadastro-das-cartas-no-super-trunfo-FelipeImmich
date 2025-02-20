#include <stdio.h>

// Estrutura que define uma Carta com diversas propriedades da cidade
typedef struct {
    char uf[3];                        // Sigla da Unidade Federativa (ex: "SP", "RJ")
    char codigo_cidade[4];             // Código da cidade (3 caracteres)
    char nome[50];                     // Nome da cidade
    int populacao;                     // População da cidade
    int numero_pontos_turisticos;      // Número de pontos turísticos da cidade
    float area;                        // Área da cidade (em km²)
    float PIB;                         // Produto Interno Bruto (PIB) da cidade
    float densidade;                   // Densidade populacional (população/área)
    float PIB_CAP;                     // PIB per capita (PIB/população)
    float super_poder;                 // Valor calculado que soma várias propriedades
} Carta;

// Função para exibir o conteúdo de uma carta
void printcarta(Carta carta) {
    // Exibe o código da cidade com 3 caracteres
    printf("Código da Cidade: %.3s\n", carta.codigo_cidade);
    // Exibe o nome da cidade
    printf("Nome da cidade: %s\n", carta.nome);
    // Exibe a sigla do estado (UF)
    printf("UF: %s\n", carta.uf);
    // Exibe a população da cidade
    printf("População da cidade: %d habitantes\n", carta.populacao);
    // Exibe o número de pontos turísticos da cidade
    printf("Número de pontos turísticos: %d\n", carta.numero_pontos_turisticos);
    // Exibe a área da cidade com duas casas decimais
    printf("Área: %.2f m²\n", carta.area);
    // Exibe o PIB da cidade com duas casas decimais
    printf("PIB: %.2f\n", carta.PIB);
    // Exibe a densidade populacional com duas casas decimais
    printf("Densidade Populacional: %.2f\n", carta.densidade);
    // Exibe o PIB per capita com duas casas decimais
    printf("PIB per capita: %.2f\n", carta.PIB_CAP);
    // Exibe o Super Poder com duas casas decimais
    printf("Super Poder: %.2f\n\n", carta.super_poder);
}

// Função que realiza o cadastro de uma carta através de entrada do usuário
Carta cadastrar_carta() {
    Carta carta;
    
    // Solicita e lê o código da cidade
    printf("Insira o código da cidade: ");
    scanf("%s", carta.codigo_cidade);

    // Solicita e lê o nome da cidade
    printf("Insira o nome da cidade: ");
    scanf("%s", carta.nome);
    
    // Solicita e lê a Unidade Federativa (UF)
    printf("Insira a UF: ");
    scanf("%s", carta.uf);
    
    // Solicita e lê a população da cidade
    printf("Insira a população: ");
    scanf("%d", &carta.populacao);

    // Solicita e lê o número de pontos turísticos
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &carta.numero_pontos_turisticos);

    // Solicita e lê a área da cidade em km²
    printf("Insira a área em km²: ");
    scanf("%f", &carta.area);

    // Solicita e lê o PIB da cidade
    printf("Insira o PIB: ");
    scanf("%f", &carta.PIB);

    // Calcula a densidade populacional (população dividida pela área)
    carta.densidade = (float) carta.populacao / carta.area;
    // Calcula o PIB per capita (PIB dividido pela população)
    carta.PIB_CAP = (float) carta.PIB / carta.populacao;

    // Calcula o 'Super Poder' somando várias propriedades
    carta.super_poder = carta.populacao + carta.numero_pontos_turisticos + carta.area +
                        carta.PIB + carta.densidade + carta.PIB_CAP;
    
    // Retorna a carta cadastrada
    return carta;
}

// Função que compara duas cartas baseando-se em suas propriedades e exibe os vencedores em cada categoria
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\nComparação entre %s e %s:\n", carta1.nome, carta2.nome);

    // Comparação da densidade populacional: vence a carta com menor valor
    if (carta1.densidade < carta2.densidade)
        printf("Densidade Populacional: %s vence\n", carta1.nome);
    else if (carta1.densidade > carta2.densidade)
        printf("Densidade Populacional: %s vence\n", carta2.nome);
    else
        printf("Densidade Populacional: Empate\n");

    // Comparação da população: vence a carta com maior população
    if (carta1.populacao > carta2.populacao)
        printf("População: %s vence\n", carta1.nome);
    else if (carta1.populacao < carta2.populacao)
        printf("População: %s vence\n", carta2.nome);
    else
        printf("População: Empate\n");

    // Comparação do número de pontos turísticos: vence a carta com maior valor
    if (carta1.numero_pontos_turisticos > carta2.numero_pontos_turisticos)
        printf("Número de Pontos Turísticos: %s vence\n", carta1.nome);
    else if (carta1.numero_pontos_turisticos < carta2.numero_pontos_turisticos)
        printf("Número de Pontos Turísticos: %s vence\n", carta2.nome);
    else
        printf("Número de Pontos Turísticos: Empate\n");

    // Comparação da área: vence a carta com maior área
    if (carta1.area > carta2.area)
        printf("Área: %s vence\n", carta1.nome);
    else if (carta1.area < carta2.area)
        printf("Área: %s vence\n", carta2.nome);
    else
        printf("Área: Empate\n");

    // Comparação do PIB: vence a carta com maior PIB
    if (carta1.PIB > carta2.PIB)
        printf("PIB: %s vence\n", carta1.nome);
    else if (carta1.PIB < carta2.PIB)
        printf("PIB: %s vence\n", carta2.nome);
    else
        printf("PIB: Empate\n");

    // Comparação do PIB per capita: vence a carta com maior valor
    if (carta1.PIB_CAP > carta2.PIB_CAP)
        printf("PIB per Capita: %s vence\n", carta1.nome);
    else if (carta1.PIB_CAP < carta2.PIB_CAP)
        printf("PIB per Capita: %s vence\n", carta2.nome);
    else
        printf("PIB per Capita: Empate\n");

    // Comparação do Super Poder: vence a carta com maior poder
    if (carta1.super_poder > carta2.super_poder)
        printf("Super Poder: %s vence\n", carta1.nome);
    else if (carta1.super_poder < carta2.super_poder)
        printf("Super Poder: %s vence\n", carta2.nome);
    else
        printf("Super Poder: Empate\n");
}

// Função principal - Ponto de entrada do programa
int main() {

    // Exibe o título do jogo
    printf("=-=-=-=-= SUPER TRUNFO =-=-=-=-=\n");
    
    // Define o número de cartas a serem cadastradas
    int num_cartas = 2;
    Carta cartas[num_cartas];
    
    // Laço para cadastrar todas as cartas informadas pelo usuário
    for (size_t i = 0; i < num_cartas; i++){
        cartas[i] = cadastrar_carta();
        printf("\nA Seguinte carta foi cadastrada com sucesso.\n\n");
        printcarta(cartas[i]);
    }
    
    // Realiza a comparação entre duas cartas se houver pelo menos duas cadastradas
    if (num_cartas >= 2) {
        comparar_cartas(cartas[0], cartas[1]);
    } else {
        printf("Você precisa cadastrar pelo menos duas cartas para comparar.\n");
    }

    return 0;
}

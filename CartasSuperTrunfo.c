#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Ex: A01, B03
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== Desafio Super Trunfo - Cadastro de Cartas ===\n");

    // Cadastro da Primeira Carta
    printf("\n=== Cadastro da Primeira Carta ===\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de Habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Segunda Carta
    printf("\n=== Cadastro da Segunda Carta ===\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de Habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    // Exibição da Primeira Carta
    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Segunda Carta
    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

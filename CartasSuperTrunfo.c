#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis da primeira carta
    char estado1;
    char nomeCidade1[40];
    char codigo1[4];
    float area1;
    float pib1;
    int populacao1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


    // Variáveis da segunda carta
    char estado2;
    char nomeCidade2[40];
    char codigo2[4];
    float area2;
    float pib2;
    int populacao2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada da primeira carta
    printf("Cadastro da Primeira Carta: \n");
    printf("Estado(A-H): ");
    scanf("%c", &estado1);
    printf("Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área(km²): ");
    scanf("%f", &area1);
    printf("PIB(em reais): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;   // Calcula a densidade populacional (hab/km²)
    // Aqui, multiplicamos o PIB por 1.000.000.000 (para converter de bilhões para reais), já que a entrada é dada em bilhões de reais.
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita (em reais)

    // Entrada da segunda carta
    printf("Cadastro da Primeira Carta: \n");
    printf("Estado(A-H): ");
    scanf("%c", &estado2);
    printf("Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área(km²): ");
    scanf("%f", &area2);
    printf("PIB(em reais): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;   // Calcula a densidade populacional (hab/km²)
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita (em reais)

    // Saída dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

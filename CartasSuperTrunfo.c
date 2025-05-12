#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis da primeira carta
    char estado1;
    char nomeCidade1[40];
    char codigo1[4];
    float area1;
    float pib1;
    int populacao1;
    int pontosTuristicos1;


    // Variáveis da segunda carta
    char estado2;
    char nomeCidade2[40];
    char codigo2[4];
    float area2;
    float pib2;
    int populacao2;
    int pontosTuristicos2;

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

    // Saída dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d", pontosTuristicos2);

    return 0;
}

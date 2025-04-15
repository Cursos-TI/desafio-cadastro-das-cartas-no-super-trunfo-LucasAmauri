#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1; // Convertendo PIB para reais e calculando per capita
    superPoder1 = populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + (1 / densidadePopulacional1) + pibPerCapita1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2; // Convertendo PIB para reais e calculando per capita
    superPoder2 = populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + (1 / densidadePopulacional2) + pibPerCapita2;

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    // Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}

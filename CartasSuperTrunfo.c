#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char nome1[100] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1; // Convertendo PIB para reais e calculando per capita

    // Carta 2
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char nome2[100] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2; // Convertendo PIB para reais e calculando per capita

    int escolha;

    // Menu interativo
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Lógica de comparação com base na escolha
    switch(escolha) {
        case 1: // Comparação de População
            printf("\nComparando População:\n");
            printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparação de Área
            printf("\nComparando Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparação de PIB
            printf("\nComparando PIB:\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nome2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparação de Número de Pontos Turísticos
            printf("\nComparando Número de Pontos Turísticos:\n");
            printf("Carta 1 - %s (%s): %d\n", nome1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparação de Densidade Demográfica
            printf("\nComparando Densidade Demográfica:\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) { // Menor densidade vence
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

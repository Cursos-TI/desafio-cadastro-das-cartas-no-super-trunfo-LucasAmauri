#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[100];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[100];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2;

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

    // Calcular densidade populacional e PIB per capita para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

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

    // Calcular densidade populacional e PIB per capita para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu para escolha dos atributos a comparar
    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");

    // Leitura da escolha dos atributos
    printf("Escolha o primeiro atributo (1-6): ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo (1-6, diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Definir soma1 e soma2 para calcular a soma dos atributos
    float soma1 = 0.0, soma2 = 0.0;

    // Comparações e cálculos da soma dos atributos
    if (escolha1 == 1) {
        soma1 += populacao1;
        soma2 += populacao2;
    } else if (escolha1 == 2) {
        soma1 += area1;
        soma2 += area2;
    } else if (escolha1 == 3) {
        soma1 += pib1;
        soma2 += pib2;
    } else if (escolha1 == 4) {
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2;
    } else if (escolha1 == 5) {
        soma1 += densidadePopulacional1;
        soma2 += densidadePopulacional2;
    } else if (escolha1 == 6) {
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2;
    }

    if (escolha2 == 1) {
        soma1 += populacao1;
        soma2 += populacao2;
    } else if (escolha2 == 2) {
        soma1 += area1;
        soma2 += area2;
    } else if (escolha2 == 3) {
        soma1 += pib1;
        soma2 += pib2;
    } else if (escolha2 == 4) {
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2;
    } else if (escolha2 == 5) {
        soma1 += densidadePopulacional1;
        soma2 += densidadePopulacional2;
    } else if (escolha2 == 6) {
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2;
    }

    // Exibição dos resultados
    printf("\nComparação das cartas:\n");

    if (soma1 > soma2) {
        printf("Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}

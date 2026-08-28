#include <stdio.h>

int main(void) {
  
    char estado01[10], codigo01[10], cidade01[50];
    char estado02[10], codigo02[10], cidade02[50];
    float populacao01, area01, pib01, densidade01, pibPerCapita01;
    float populacao02, area02, pib02, densidade02, pibPerCapita02;
    int pontosTuristicos01, pontosTuristicos02;

    printf("Informe o estado da Carta 1: ");
    scanf("%9s", estado01);
    printf("Informe o codigo da Carta 1: ");
    scanf("%9s", codigo01);
    printf("Informe o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", cidade01);
    printf("Informe a populacao da Carta 1: ");
    scanf("%f", &populacao01);
    printf("Informe a area da Carta 1: ");
    scanf("%f", &area01);
    printf("Informe o PIB da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib01);
    printf("Informe o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos01);

    printf("\nInforme o estado da Carta 2: ");
    scanf("%9s", estado02);
    printf("Informe o codigo da Carta 2: ");
    scanf("%9s", codigo02);
    printf("Informe o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", cidade02);
    printf("Informe a populacao da Carta 2: ");
    scanf("%f", &populacao02);
    printf("Informe a area da Carta 2: ");
    scanf("%f", &area02);
    printf("Informe o PIB da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib02);
    printf("Informe o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos02);

    densidade01 = populacao01 / area01;
    pibPerCapita01 = (pib01 * 1000000000.0f) / populacao01;
    densidade02 = populacao02 / area02;
    pibPerCapita02 = (pib02 * 1000000000.0f) / populacao02;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("Populacao: %.0f\n", populacao01);
    printf("Area: %.2f km²\n", area01);
    printf("PIB: %.2f bilhoes de reais\n", pib01);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita01);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("Populacao: %.0f\n", populacao02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita02);

    return 0;
}

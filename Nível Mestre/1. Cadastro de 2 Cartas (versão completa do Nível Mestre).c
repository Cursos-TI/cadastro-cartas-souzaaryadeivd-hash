#include <stdio.h>

int main() {
    // ==================== VARIÁVEIS DA CARTA 1 ====================
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // ==================== VARIÁVEIS DA CARTA 2 ====================
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    int opcao; // Variável para escolher o atributo de comparação

    // ==================== ENTRADA - CARTA 1 ====================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // ==================== ENTRADA - CARTA 2 ====================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ==================== EXIBIÇÃO DAS CARTAS ====================
    printf("\n\n========== CARTA 1 ==========\n");
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d | Área: %.2f km²\n", populacao1, area1);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib1, pontosTuristicos1);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade1, pibPerCapita1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d | Área: %.2f km²\n", populacao2, area2);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib2, pontosTuristicos2);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade2, pibPerCapita2);

    // ==================== MENU DE COMPARAÇÃO ====================
    printf("\n\n===== ESCOLHA O ATRIBUTO PARA COMPARAR =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    // ==================== COMPARAÇÕES COM IF / ELSE ====================
    if (opcao == 1) { // População
        printf("Comparando População:\n");
        printf("%s: %d habitantes\n", nomeCidade1, populacao1);
        printf("%s: %d habitantes\n", nomeCidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 2) { // Área
        printf("Comparando Área:\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);

        if (area1 > area2) {
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 3) { // PIB
        printf("Comparando PIB:\n");
        printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

        if (pib1 > pib2) {
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 4) { // Pontos Turísticos
        printf("Comparando Pontos Turísticos:\n");
        printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 5) { // Densidade (menor densidade vence normalmente no Super Trunfo)
        printf("Comparando Densidade Populacional:\n");
        printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);

        if (densidade1 < densidade2) {          // Menor densidade vence
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (densidade2 < densidade1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 6) { // PIB per Capita
        printf("Comparando PIB per Capita:\n");
        printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
        printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2) {
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    // ========== DECLARAÇÃO DAS VARIÁVEIS ==========
    char estado[50];             // Letra do estado (A a H)
    int codigo;                  // Código da carta (ex: A01)
    char nomeCidade[40];         // Nome da cidade
    int populacao;               // Número de habitantes
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões de reais
    int pontosTuristicos;        // Quantidade de pontos turísticos

    // ========== ENTRADA DE DADOS ==========
    printf("=== Cadastro de Carta - Super Trunfo ===\n\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %s", &estado[50]);                    
    // Espaço antes do %s limpa o buffer

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %d", &codigo);

    printf("Digite o Nome da Cidade (Ex: São Paulo): \n");
    scanf(" %s(^\n])", &nomeCidade[40]);
 
    printf("Digite a População: \n");
    scanf(" %d", &populacao);

    printf("Digite a Área (em km²): \n");
    scanf(" %f", &area);

    printf("Digite o PIB (em bilhões): \n");
    scanf(" %f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos);

    // ========== EXIBIÇÃO DOS DADOS ==========
    printf("\n\n========== CARTA CADASTRADA ==========\n");
    printf("Estado: %s\n", estado[50]);
    printf("Código: %d\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade[40]);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("=====================================\n");

    return 0;
}
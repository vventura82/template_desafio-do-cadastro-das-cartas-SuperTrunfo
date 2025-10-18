
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Inserir propriedades calculadas (Nível Aventureiro)

int main() {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("=== Cadastro de Carta - Super Trunfo: Países (Nível Aventureiro) ===\n\n");

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculos automáticos
    densidade_populacional = populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao; // PIB em reais

    printf("\n=== Dados da Carta ===\n");
    printf("Código: %s\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    return 0;
}

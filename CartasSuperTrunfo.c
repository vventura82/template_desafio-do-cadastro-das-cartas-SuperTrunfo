#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 


#include <stdio.h>

// Tema 2
// Objetivo: Inserir propriedades calculadas

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
    pib_per_capita = (pib * 1000000000) / populacao; // Convertendo bilhões para unidades

    printf("\n=== Dados da Carta ===\n");
    printf("Código: %s\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    return 0;
}


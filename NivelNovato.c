#include <stdio.h>

int main() {
  // Carta 1 e Carta 2
  char estado1[20], estado2[20];
  char codigo1[20], codigo2[20];
  char nomedacidade1[20], nomedacidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;

  // Entrada de dados da carta
  printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Saida de dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    return 0;
}
#include <stdio.h>

int main() {
    // Carta 1 e Carta 2
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // --- Cálculos (Carta 1) ---
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapita1;

    // --- Cálculos (Carta 2) ---
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2;

    // --- Saída de dados ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // --- Comparações ---
    printf("\n=== Comparacoes ===\n");

    // Populacao
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu\n");
    else if (populacao2 > populacao1)
        printf("Populacao: Carta 2 venceu\n");
    else
        printf("Populacao: Empate\n");

    // Area
    if (area1 > area2)
        printf("Area: Carta 1 venceu\n");
    else if (area2 > area1)
        printf("Area: Carta 2 venceu\n");
    else
        printf("Area: Empate\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu\n");
    else
        printf("PIB: Empate\n");

    // Pontos Turisticos
    if (pontosturisticos1 > pontosturisticos2)
        printf("Pontos Turisticos: Carta 1 venceu\n");
    else if (pontosturisticos2 > pontosturisticos1)
        printf("Pontos Turisticos: Carta 2 venceu\n");
    else
        printf("Pontos Turisticos: Empate\n");

    // Densidade populacional (menor vence)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu\n");
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 venceu\n");
    else
        printf("Densidade Populacional: Empate\n");

    // PIB per capita
    if (pibpercapita1 > pibpercapita2)
        printf("PIB per Capita: Carta 1 venceu\n");
    else if (pibpercapita2 > pibpercapita1)
        printf("PIB per Capita: Carta 2 venceu\n");
    else
        printf("PIB per Capita: Empate\n");

    // Super Poder
    if (superpoder1 > superpoder2)
        printf("Super Poder: Carta 1 venceu\n");
    else if (superpoder2 > superpoder1)
        printf("Super Poder: Carta 2 venceu\n");
    else
        printf("Super Poder: Empate\n");

    return 0;
}

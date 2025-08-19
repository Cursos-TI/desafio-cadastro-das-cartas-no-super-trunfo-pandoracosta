#include <stdio.h>

int main() {
    // Variáveis Da Carta1
    char estado1;
    char codigo1[4];
    char cidade1[60];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1; // Novo: Super Poder

    // Variáveis Da Carta2
    char estado2;
    char codigo2[4];
    char cidade2[60];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2; // Novo: Super Poder

    // Leitura dos dados da Carta1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtd_pontos_turisticos1);

    // Leitura dos dados da Carta2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtd_pontos_turisticos2);

    // Cálculos Carta1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    // Cálculo do Super Poder: soma de todos os atributos + inverso da densidade
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)qtd_pontos_turisticos1 + 
                   pib_per_capita1 + (1.0f / densidade1);

    // Cálculos Carta2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    // Cálculo do Super Poder: soma de todos os atributos + inverso da densidade
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)qtd_pontos_turisticos2 + 
                   pib_per_capita2 + (1.0f / densidade2);


    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    int resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
    
    // Área (maior vence)
    int resultado_area = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
    
    // PIB (maior vence)
    int resultado_pib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);
    
    // Pontos Turísticos (maior vence)
    int resultado_pontos = (qtd_pontos_turisticos1 > qtd_pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_pontos ? 1 : 2, resultado_pontos);
    
    // Densidade Populacional (menor vence - regra invertida)
    int resultado_densidade = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);
    
    // PIB per Capita (maior vence)
    int resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_pib_per_capita ? 1 : 2, resultado_pib_per_capita);
    
    // Super Poder (maior vence)
    int resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado_super_poder ? 1 : 2, resultado_super_poder);

    return 0;
}

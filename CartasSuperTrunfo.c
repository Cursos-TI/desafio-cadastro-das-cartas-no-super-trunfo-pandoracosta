#include <stdio.h>

int main() {
    // Variáveis Da Carta1
    char estado1;
    char codigo1[4]; // 3 caracteres + '\0'
    char cidade1[60]; // espaço suficiente para nome de cidade
    int populacao1; 
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;

    // Variáveis Da Carta2
    char estado2;
    char codigo2[4];
    char cidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;

    // Leitura dos dados da Carta1
    printf("Cadastro da Carta 1:\n");

    // Input do estado
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    // Input do codigo de carte
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    // Input do nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até new line

    // Input da população
    printf("População: ");
    scanf("%d", &populacao1);

    // Input da área
    printf("Área (em km²): ");
    scanf("%f", &area1);

    // Input do PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    // Input da qtd de pontos turisticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtd_pontos_turisticos1);

    // Leitura dos dados da segunda carta, mesmo padrão da Carta1
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtd_pontos_turisticos2);

    // Output dos dados da Carta1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos1);

    // Output dos dados da Carta2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);

    return 0;
}

#include <stdio.h>

int main() {

    // Variáveis da primeira carta
    char estado1;
    char codigodacarta1[10], nomedacidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    // Variáveis da segunda carta
    char estado2;
    char codigodacarta2[10], nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Coleta de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (UF - 1 letra): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade: ");
    scanf("%s", nomedacidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1); 

    // Coleta de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (UF - 1 letra): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigodacarta2);

    printf("Nome da Cidade: ");
    scanf("%s", nomedacidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);  

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);  

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}

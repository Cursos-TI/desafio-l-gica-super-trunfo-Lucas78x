#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[20];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estado1);
    getchar();  // Consumir o '\n' deixado pelo scanf

    printf("Digite o código da primeira carta: ");
    scanf(" %19s", codigo1);
    getchar();  // Consumir o '\n' deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    getchar();  // Consumir o '\n' deixado pelo scanf

    // Entrada dos dados da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf(" %c", &estado2);
    getchar();  // Consumir o '\n' deixado pelo scanf

    printf("Digite o código da segunda carta: ");
    scanf(" %19s", codigo2);
    getchar();  // Consumir o '\n' deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);  // Consumir o '\n' deixado pelo scanf
    
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);  // Consumir o '\n' deixado pelo scanf
    
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);  // Consumir o '\n' deixado pelo scanf
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);  // Consumir o '\n' deixado pelo scanf

    // Cálculo da densidade populacional e PIB capital para ambas as cartas
    float densidadePopulacional1 = populacao1 / area1;
    float pibCapital1 = pib1 / populacao1;

    float densidadePopulacional2 = populacao2 / area2;
    float pibCapital2 = pib2 / populacao2;

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB por Capital: %.2f reais\n", pibCapital1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB por Capital: %.2f reais\n", pibCapital2);

    // Comparação do atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu! População: %d > %d\n", nomeCidade1, populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (%s) venceu! População: %d > %d\n", nomeCidade2, populacao2, populacao1);
    } else {
        printf("Empate! Ambas as cartas têm a mesma população: %d\n", populacao1);
    }

    return 0;
}

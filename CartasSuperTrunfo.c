#include <stdio.h>

int main() {
    //Declarando as variáveis
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;
    char estado1, carta1[3], cidade1[30], estado2, carta2[3], cidade2[30];

    //Escolher a letra das duas cartas
    printf("Carta 1: Escolha uma letra de 'A' a 'H' (Representando um dos oito estados): \n");
    scanf("%c", &estado1);

    printf("Carta 2: Escolha uma letra de 'A' a 'H' (Representando um dos oito estados): \n");
    scanf("%c", &estado2);

    //Escolher o código das duas cartas
    printf("Carta 1: De o código da carta (A letra do estado seguido de um número de 01 a 04): \n");
    scanf("%s" , &carta1);

    printf("Carta 2: De o código da carta (A letra do estado seguido de um número de 01 a 04): \n");
    scanf("%s" , &carta2);

    //Digitar o nome das cidades das duas cartas
    printf("Carta 1: Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Carta 2: Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    //Digitar o número de habitantes das duas cartas
    printf("Carta 1: Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Carta 2: Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    //Digitar a área das duas cartas
    printf("Carta 1: Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Carta 2: Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    //Digitar o PIB das duas cartas
    printf("Carta 1: Digite o produto interno bruto da cidade (PIB): \n");
    scanf("%f", &pib1);

    printf("Carta 2: Digite o produto interno bruto da cidade (PIB): \n");
    scanf("%f", &pib2);

    //Digitar o número de pontos túristicos das duas cartas
    printf("Carta 1: Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);
    
    printf("Carta 2: Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    //Calcular a densidade populacional
    float dens1 = (float)populacao1 / area1, dens2 = (float)populacao2 / area2;

    //Calcular o PIB per capita
    float capt1 = pib1 / (float)populacao1, capt2 = pib2 / (float)populacao2;

    //Calcular o super poder
    float super1 = (float)populacao1 + (float)pontos1 + area1 + pib1 + capt1 + (1.0 / dens1);
    float super2 = (float)populacao2 + (float)pontos2 + area2 + pib2 + capt2 + (1.0 / dens2);

    //Escrever o conteúdo da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", carta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontos1);
    printf("Densidade populacional: %.2f \n", dens1);
    printf("PIB per capita: %.2f \n", capt1);

    //Escrever o conteúdo da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos2);
    printf("Densidade populacional: %.2f \n", dens2);
    printf("PIB per capita: %.2f \n", capt2);

    //Escrever a comparação das duas cartas
    printf("Comparação de cartas: \n");
    printf("População: A carta %d venceu \n", (populacao1 < populacao2) + 1);
    printf("Área: A carta %d venceu \n", (area1 < area2) + 1);
    printf("PIB: A carta %d venceu \n", (pib1 < pib2) + 1);
    printf("Pontos turísticos: A carta %d venceu \n", (pontos1 < pontos2) + 1);
    printf("Densidade populacional: A carta %d venceu \n", (dens1 > dens2) + 1);
    printf("PIB per capita: A carta %d venceu \n", (capt1 < capt2) + 1);
    printf("Super poder: A carta %d venceu \n", (super1 < super2) + 1);

    return 0;
}
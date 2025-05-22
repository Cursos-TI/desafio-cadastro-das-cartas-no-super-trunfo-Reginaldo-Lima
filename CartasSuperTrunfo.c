#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Iniciante
// Reginaldo Moura de Lima

int main() {
    // Declaração das variáveis
    char estado1, estado2;                      //Estado da carta
    char codigo1[4], codigo2[4];                //código da cidade
    char nome1[50], nome2[50];                  //nome da cidade
    int populacao1, populacao2;                 //população da cidade
    int pontosTuristicos1, pontosTuristicos2;   //quatidade de pontos turísticos
    float pib1, pib2;                           //PIB da cidade em Bilhoes de reais
    float area1, area2;                         //area de cidade em km2


    // Cadastro das Cartas:
    printf("Bem vindo ao Super Trunfo Paises\n\n");

    //Primeira carta
    printf("Vamos começar com os dados da primeira carta:\n");

    printf("Informe o estado da primeira carta (um caractere de A até H):\n");
    scanf(" %c", &estado1);

    printf("informe o código da primeira carta (composto pela letra do estado e um número de 01 a 04): \n");
    scanf(" %s", codigo1);

    printf("Informe o nome da primeira cidade (uma única palavra ou sem espaços em branco): \n");
    scanf(" %s", nome1);

    printf("Informe a população da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("informe o PIB da primeira cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Informe a area da primeira cidade (em km2): \n");
    scanf("%f", &area1);

    printf("Informe a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontosTuristicos1);

    //Segunda carta
    printf("\nAgora vamos começar com os dados da segunda carta:\n");

    printf("Informe o estado da segunda carta (um caractere de A até H):\n");
    scanf(" %c", &estado2);

    printf("informe o código da segunda carta (composto pela letra do estado e um número de 01 a 04): \n");
    scanf(" %s", codigo2);

    printf("Informe o nome da segunda cidade (uma única palavra ou sem espaços em branco): \n");
    scanf(" %s", nome2);

    printf("Informe a população da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("informe o PIB da segunda cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Informe a area da segunda cidade (em km2): \n");
    scanf("%f", &area2);

    printf("Informe a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Carta 01
    printf("\nPRIMEIRA CARTA:\n");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nCidade: %s", nome1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km2", area1);
    printf("\nPIB: %.2f Bilhões de reais", pib1);
    printf("\nQuantidade de pontos turisticos: %d\n", pontosTuristicos1);

    // Carta 02
    printf("\nSEGUNDA CARTA:\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nCidade: %s", nome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km2", area2);
    printf("\nPIB: %.2f Bilhões de reais", pib2);
    printf("\nQuantidade de pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
} //fim main

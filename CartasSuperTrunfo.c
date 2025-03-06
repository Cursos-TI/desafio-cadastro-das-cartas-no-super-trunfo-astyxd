#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;
    char codigoDaCarta1[50], codigoDaCarta2[50];
    char nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;

    printf("Carta 1:\n");

    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Codigo: ");
    scanf("%s", &codigoDaCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeDaCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("\n\n");

    printf("Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf(" %s", &codigoDaCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeDaCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    

    printf("-------------------------------\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos1);

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);

    return 0;
}

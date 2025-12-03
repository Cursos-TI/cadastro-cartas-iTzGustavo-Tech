#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades..

    char estado1, codigo1[4], nomecid1[30]; // Estado, codigo da cidade e nome da cidade.
    int populacao1, pontost1;  // População e pontos turisticos.
    float area1, pib1; // Área em km2 e Produto interno bruto.

    char estado2, codigo2[4], nomecid2[30]; // Estado, codigo da cidade e nome da cidade.
    int populacao2, pontost2;  // População e pontos turisticos.
    float area2, pib2; // Área em km2 e Produto interno bruto

  // Área para entrada de dados

    printf("=== Carta 1 ===\n");
    printf("Estado A a H: ");
    scanf("%c", &estado1);

    printf("Código da Carta A01 a A08: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &nomecid1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Tusrísticos: ");
    scanf("%f", &pontost1);


  // Área para exibição dos dados da cidade

return 0;
} 

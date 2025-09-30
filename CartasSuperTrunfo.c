#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1; // Uma letra de 'A' a 'H' (representando um dos oito estados)
  char estado2;
  char codigo1[5]; //A letra do estado seguida de um número de 01 a 04
  char codigo2[5];
  char cidade1[20]; // O nome da cidade
  char cidade2[20];
  int populacao1, populacao2; // O número de habitantes da cidade
  int numeroturisticos1, numeroturisticos2; //A quantidade de pontos turísticos na cidade
  float pib1, pib2; // O Produto Interno Bruto da cidade
  float area1, area2; // Área (em km²): A área da cidade em quilômetros quadrados

  float densidadepop1, densidadepop2;
  float pibpercapita1, pibpercapita2;
  float superpoder1, superpoder2;

  //Carta 1

  printf("Digite o Estado Entre A-H: ");
  scanf(" %c", &estado1); 

  printf("Digite o codigo da carta sendo a letra do estado seguida de um número de 01 a 04 : ");
  scanf("%s", codigo1);

  printf("Digite a cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite os Pontos turistico: ");
  scanf("%d", &numeroturisticos1);

  printf("Digite o pib: ");
  scanf("%f", &pib1);

  printf("Digite a area: ");
  scanf("%f", &area1);

  printf("Carta 2\n");
  
  // Calculo densidade populacional e pib per capita
  
  densidadepop1 = populacao1 / area1;
  pibpercapita1 = pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + numeroturisticos1 + pibpercapita1 + (1 / densidadepop1);

  // Carta2
  
  printf("Digite o Estado Entre A-H: ");
  scanf(" %c", &estado2); 

  printf("Digite o codigo da carta sendo a letra do estado seguida de um número de 01 a 04 : ");
  scanf("%s", codigo2);

  printf("Digite a cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite os Pontos turistico: ");
  scanf("%d", &numeroturisticos2);

  printf("Digite o pib: ");
  scanf("%f", &pib2);

  printf("Digite a area: ");
  scanf("%f", &area2);

  // Calculo densidade populacional e pib per capita

  densidadepop2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + numeroturisticos2 + pibpercapita2 + (1 / densidadepop2);

  // Exibindo os dados carta1

printf("\n--- Carta cadastrada01 ---\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Pontos Turisticos: %d\n", numeroturisticos1);
printf("PIB: %.2f\n", pib1);
printf("Area: %.2f km²\n", area1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
printf("PIB per Capita: %.2f\n", pibpercapita1);
printf ("Super Poder: %.2f\n", superpoder1);

   // Exibindo os dados carta2
   
printf("\n--- Carta cadastrada02 ---\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Pontos Turisticos: %d\n", numeroturisticos2);
printf("PIB: %.2f\n", pib2);
printf("Area: %.2f km²\n", area2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
printf("PIB per Capita: %.2f\n", pibpercapita2);
printf("Super Poder: %.2f\n", superpoder2);

// comparacao das cartas

  printf("\n --- Comparação de Cartas ---\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeroturisticos1 > numeroturisticos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepop1 < densidadepop2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

return 0;
} 
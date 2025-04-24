#include <stdio.h>

int main() {

printf("Desafio Super Trunfo!");

// Variaveis da Carta1

char estado1;
char codigo1[8];
char nomecidade1[30];
int populacao1 , pontosturisticos1;
float area1 , pib1;

// Variaveis da Carta2
char estado2;
char codigo2[8];
char nomecidade2  [30];
int populacao2 , pontosturisticos2;
float area2 , pib2;

// leitura de dados da Carta 1

printf("Cadastrando a carta 1\n\n");

printf("Qual é o seu Estado?");
scanf(" %c" , &estado1);

printf(" Codigo do Estado:");
scanf("%s",codigo1);

printf("Nome da cidade");
scanf("%s", nomecidade1);

printf("Tamanho da área em (km²):");
scanf("%f", &area1);

printf("Tamanho da populaçao\n");
scanf("%d", &populacao1);

printf("Qual é o PIB do Estado?\n");
scanf(" %f" , &pib1);

printf("Quantos pontos turisticos tem?");
scanf("%d",&pontosturisticos1);
printf("\n\n");


// leitura dos dados da Carta 2

printf("Cadastrando a carta 2\n\n");

printf("Qual é o seu Estado?");
scanf(" %c", &estado2);

printf("O codigo do Estado:");
scanf("%s", codigo2);

printf("Nome da cidade");
scanf("%s", nomecidade2);

printf("Tamanho da área em (km²):\n");
scanf("%f", &area2);

printf("Tamanho da populaçao\n");
scanf(" %d", &populacao2);

printf("Qual é o PIB?\n");
scanf(" %f" , &pib2);

printf("Quantos pontos turisticos tem?\n");
scanf("%d", &pontosturisticos2);
printf("\n");


// Mostra os dados da primeira carta cadastrada
printf("As cartas cadastradas são:\n\n");

printf("Carta 1\n");
printf("Estado:%c\n", estado1);
printf("Código:%s\n", codigo1);
printf("Nome da cidade:%s\n", nomecidade1);
printf("População:%d habitantes\n", populacao1);
printf("Área:%.2f km²\n", area1);
printf("PIB:%.2f bilhões de reais\n", pib1);
printf("Número de pontos turisticos:%d\n", pontosturisticos1);
printf("\n");

// Mostra dados da segunda carta cadastrada
printf("Carta 2\n");
printf("Estado:%c\n", estado2);
printf("Código:%s\n", codigo2);
printf("Nome da cidade:%s\n", nomecidade2);
printf("População:%d habitantes\n", populacao2);
printf("Área:%.2f km²\n", area2);
printf("PIB:%.2f bilhões de reais\n", pib2);
printf("Número de pontos turisticos:%d\n", pontosturisticos2);

return 0; 
}

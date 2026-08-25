#include <stdio.h>
char Estado[20];
char Codigodacarta[10];
char NomedaCidade[50];
float População;
float Área;
float PIB;
int NúmeroDePontosTurísticos;

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
printf ("Informe o seu Estado:\n");
scanf ("%s", Estado);

Printf ("Informe o Codido da Carta:\n");
scanf ("%s", Codigodacarta);

printf ("Informe o Nome da Cidade:\n");
scanf ("%s", NomedaCidade);

printf ("Informe a População:\n");
scanf ("%f", &População);

printf ("Informe a Área:\n");
scanf ("%f", &Área);

printf ("Informe o PIB:\n");
scanf ("%f", &PIB);

printf ("Informe o Número de Pontos Turísticos:\n");
scanf ("%d", &NúmeroDePontosTurísticos);


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 

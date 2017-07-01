#include <stdio.h>
#include <stdlib.h>

/*

Converte de pes para polegadas, jardas e milhas.

*/

int main(int argc, char *argv[])
{
  float pes, polegadas, jardas, milhas;
  printf("\n=============== Converte de pes para pelegadas, jardas e milhas ===============\n");
  printf("\n\nInforme a media em pes: ");
  scanf("%f", &pes);
  polegadas = (pes * 12);
  jardas = (pes / 3);
  milhas = (jardas/1760);
  printf("\n\nMedida em Polegas: %.2f polegadas.", polegadas);
  printf("\nMedida em Jardas: %.2f Jardas.", jardas);
  printf("\nMedida em Milhas: %.2f polegadas.", milhas);
  
  printf("\n===============================================================================\n");
  system("PAUSE");	
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*

Calcula idade em anos, meses, dias e semanas.

*/

int main(int argc, char *argv[])
{
  long int anoNascimento, anoAtual, anos, meses, dias, semanas;
  printf("\n============ Calcula idade em anos, meses, dias e semanas ============\n");
  printf("\nInforme o ano de nascimento: ");
  scanf("%ld",&anoNascimento);
  printf("\nInforme o ano de atual: ");
  scanf("%ld",&anoAtual);
  
  anos = (anoAtual - anoNascimento);
  meses = (anos * 12);
  dias = (meses * 30);
  semanas = (dias / 7);
    
  printf("\n\nIdade em anos: %ld anos.", anos);
  printf("\nIdade em meses: %ld meses.", meses);
  printf("\nIdade em dias: %ld dias.", dias);
  printf("\nIdade em semanas: %ld semanas.\n", semanas);
  
  printf("\n======================================================================\n");
  system("PAUSE");	
  return 0;
}

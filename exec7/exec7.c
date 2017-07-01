#include <stdio.h>
#include <stdlib.h>

/*

Determina a descrição do mês a partir de um número inteiro.

*/

int main(int argc, char *argv[])
{
  int numero;
  
  printf("\n========= Determina a descricao do mes a partir de um numero inteiro ========\n");
  printf("\nInforme o numero do mes entre 1 a 12: ");
  scanf("%d", &numero);
  switch(numero)
  {
        case 1: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Janeiro"); break;
        case 2: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Fevereiro"); break;
        case 3: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Marco"); break;
        case 4: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Abril"); break;
        case 5: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Maio"); break;
        case 6: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Junho"); break;
        case 7: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Julho"); break;
        case 8: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Agosto"); break;
        case 9: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Setembro"); break;
        case 10: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Outubro"); break;
        case 11: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Novembro"); break;
        case 12: printf("\n\nO numero %d corresponde ao mes de %s.\n", numero, "Dezembro"); break;
        default: printf("o valor informado nao corresponde a nenhum mes.");
                
                           
  }
  printf("\n=============================================================================\n");
  system("PAUSE");	
  return 0;
}

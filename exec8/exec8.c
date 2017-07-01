#include <stdio.h>
#include <stdlib.h>

/*

    Determina se A + B é menor, maior ou igual que C.

*/

int main(int argc, char *argv[])
{
  int a, b, c;
  printf("\n========== Determina se A + B e menor, maior ou igual que C =========\n");
  printf("\nInforme o valor de A: ");
  scanf("%d", &a);
  printf("\nInforme o valor de B: ");
  scanf("%d", &b);
  printf("\nInforme o valor de C: ");
  scanf("%d", &c);
  
  if((a + b) < c)
       printf("\n\nA (%d) + B(%d) <  C(%d) - (Menor).", a, b, c);
  else if ((a + b) > c)
       printf("\n\nA (%d) + B(%d) >  C(%d) - (Maior).", a, b, c);
  else
       printf("\n\nA (%d) + B(%d) = C(%d) - (Igual). ", a, b, c);
  
  
  printf("\n=====================================================================\n");
  
  system("PAUSE");	
  return 0;
}

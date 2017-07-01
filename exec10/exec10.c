#include <stdio.h>
#include <stdlib.h>

/*

Determina o menor de quatro números inteiros.

*/

int main(int argc, char *argv[])
{
  int n1, n2, n3, n4;
  printf("\n============== Determina o menor de quatro numeros inteiros ==============\n");
  printf("\nInforme o numero 1:");
  scanf("%d", &n1);
  printf("\nInforme o numero 2:");
  scanf("%d", &n2);
  printf("\nInforme o numero 3:");
  scanf("%d", &n3);
  printf("\nInforme o numero 4:");
  scanf("%d", &n4);
  
  if ((n1 <= n2) && (n1 <= n3) && (n1 <= n4))
     printf("\n\nO menor informado e n1 = %d.", n1);
  else if ((n2 <= n1) && (n2 <= n3) && (n2 <= n4))
     printf("\n\nO menor informado e n2 = %d.", n2);
  else if ((n3 <= n1) && (n3 <= n2) && (n3 <= n4))
     printf("\n\nO menor informado e n3 = %d.", n3);
  else
     printf("\n\nO menor informado e n4 = %d.", n4);   
        
  printf("\n==========================================================================\n");
  
  system("PAUSE");	
  return 0;
}

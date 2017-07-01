#include <stdio.h>
#include <stdlib.h>

/*

Calcula média ponderada de três notas.

*/

int main(int argc, char *argv[])
{

  double n1, n2, n3, n4, p1, p2, p3, p4, media; 
  
  printf("\n==================== Calcula media ponderada 3 notas ========================\n"); 
  printf("\n\nInforme o 1 nota: ");
  scanf("%lf", &n1);
  printf("\n\nInforme o 2 nota: ");
  scanf("%lf", &n2);
  printf("\n\nInforme o 3 nota: ");
  scanf("%lf", &n3);
  printf("\n\nInforme o 4 nota: ");
  scanf("%lf", &n4);
  printf("\n\nInforme o peso do 1 nota: ");
  scanf("%lf", &p1);
  printf("\n\nInforme o peso do 2 nota: ");
  scanf("%lf", &p2);
  printf("\n\nInforme o peso do 3 nota: ");
  scanf("%lf", &p3);
  printf("\n\nInforme o peso do 4 nota: ");
  scanf("%lf", &p4);
  
  media = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1 + p2 + p3 + p4);
  printf("\n\nMedia ponderada igual a %.2lf. \n\n", media);
  
  printf("\n=============================================================================\n");
  system("PAUSE");	
  return 0;
}

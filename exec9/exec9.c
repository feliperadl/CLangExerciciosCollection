#include <stdio.h>
#include <stdlib.h>

/*

	Determina se for A = B soma, senão multiplica.

*/

int main(int argc, char *argv[])
{
  int a, b, c;
  printf("\n========= Determina se for A = B soma, senao multiplica. ========\n");
  printf("\nInforme o valor de A: ");
  scanf("%d", &a);
  printf("\nInforme o valor de B: ");
  scanf("%d", &b);
  
  if(a == b)
  {
    c = a + b;
    printf("\n\nSoma - C = A + B = %d", c);
  }
  else
  {
    c = a * b;
    printf("\n\nMultiplica - C = A * B = %d", c);
  } 
  
  printf("\n=================================================================\n");
  system("PAUSE");	
  return 0;
}

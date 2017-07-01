#include <stdio.h>
#include <stdlib.h>

/*

Calcula quilowatt consumidade em uma residencia. 

*/

int main(int argc, char *argv[])
{
  float salarioMinimo, quantidade;
  printf("\n========== Calcula quilowatt consumidade em uma residencia ==========\n");
  printf("\nInforme o valor do salario minimo: ");
  scanf("%f", &salarioMinimo);
  printf("\nInforme a quantidade quilowatt consumida: ");
  scanf("%f", &quantidade);
  
  printf("\n\nValor do quilowatt: %.2f reais.", 
  (salarioMinimo / 5));
  printf("\nValor a ser pago pela residencia: %.2f reais.", 
  (quantidade * (salarioMinimo / 5)));
    printf("\nValor a ser pago pela residencia(com desconto de 15\%): %.2f reais.", 
  ((quantidade * (salarioMinimo / 5)) * 0.85));
  
  printf("\n=====================================================================\n");
  system("PAUSE");	
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
Calcula velocidade media.
*/

int main(int argc, char *argv[])
{
  float di, df, ti, tf, dx, dt, vm;
  printf("\n===================== Calcula velocidade media ==================\n");
  printf("\nInforme a distancia inicial: ");
  scanf("%f", &di);
  printf("\nInforme a distancia Final: ");
  scanf("%f", &df);
  printf("\nInforme o tempo inicial: ");
  scanf("%f", &ti);
  printf("\nInforme o tempo Final: ");
  scanf("%f", &tf);
  dx = df - di;
  dt = tf - ti;
  vm = dx / dt;
  printf("\n\nVelocidade media = %.2f.\n", vm);
  printf("\n=================================================================\n");
  system("PAUSE");	
  return 0;
}

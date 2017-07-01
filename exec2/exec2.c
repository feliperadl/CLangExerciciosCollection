#include <stdio.h>
#include <stdlib.h>

/*

Calcula aceleração.

*/

int main(int argc, char *argv[])
{
  float vi, vf, ti, tf, dv, dt, a;
  printf("\n===================== Calcula Aceleracao ==================\n");
  printf("\nInforme a velocidade inicial: ");
  scanf("%f", &vi);
  printf("\nInforme a velocidade Final: ");
  scanf("%f", &vf);
  printf("\nInforme o tempo inicial: ");
  scanf("%f", &ti);
  printf("\nInforme o tempo Final: ");
  scanf("%f", &tf);
  dv = vf - vi;
  dt = tf - ti;
  a = dv / dt;
  printf("\n\nAceleracao = %.2f.\n", a);
  printf("\n=================================================================\n");
  system("PAUSE");	
  return 0;
}

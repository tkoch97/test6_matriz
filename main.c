#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[3][3];
  int i; // índice da linha
  int j; // índice da coluna

  printf("\nDigite valor para os elementos da matriz\n\n");

  for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    {
      printf("\nElemento da linha %d, coluna %d = ",i+1,j+1);
      scanf("%d", &matriz[i][j]);
    }

  printf("\n\n********** SAIDA DE DADOS **********\n\n");

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
      printf("\nElemento da linha %d, coluna %d = %d",i+1,j+1,matriz[i][j]);
    }
  return 0;
}
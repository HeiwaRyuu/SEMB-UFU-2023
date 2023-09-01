/*
Questão 08
Escreva um programa em C que leia todos os elementos de uma matriz A4×4 e imprima
a matriz e a sua transposta na tela.
*/

#include <stdio.h>

int main(){
  int m=4, n=4, min=0, max=100;

  int matriz[m][n], matriz_transposta[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Matriz original:\n");
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Matriz transposta:\n");
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      matriz_transposta[i][j] = matriz[j][i];
      printf("%d ", matriz_transposta[i][j]);
    }
    printf("\n");
  }

  return 0;
}
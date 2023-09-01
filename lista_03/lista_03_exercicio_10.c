/*
Questão 10
Escreva um programa em C que leia um valor inteiro n, e em seguida, leia duas
matrizes A e B em R
n×n
e calcule C = A × B. Imprima as matrizes A, B e C na tela.
*/

#include <stdio.h>

int main(){
  int n, min=0, max=100;

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  int matriz_a[n][n], matriz_b[n][n], matriz_c[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d da matriz A: ", i+1, j+1);
      scanf("%d", &matriz_a[i][j]);
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d da matriz B: ", i+1, j+1);
      scanf("%d", &matriz_b[i][j]);
    }
  }

  printf("Matriz A:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", matriz_a[i][j]);
    }
    printf("\n");
  }

  printf("Matriz B:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", matriz_b[i][j]);
    }
    printf("\n");
  }

  printf("Matriz C:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      matriz_c[i][j] = 0;
      for(int k = 0; k < n; k++){
        matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
      }
      printf("%d ", matriz_c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
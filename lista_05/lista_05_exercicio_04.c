// Questão 4
// Escreva um função que receba um vetor de inteiros A e o seu tamanho n por parâmetro
// e retorna o vetor invertido.
// 1 int inverte(int A[], int n);
// Tente resolver esse problema sem utilizar nenhum vetor auxiliar.

#include <stdio.h>

int inverte(int A[], int n){
    int i, aux;
    for(i = 0; i < n/2; i++){
        aux = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = aux;
    }
}


int main(void) {
  int n, i;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int A[n];

  for(i = 0; i < n; i++){
      printf("Digite o valor do elemento %d: ", i + 1);
      scanf("%d", &A[i]);
  }

  inverte(A, n);

  printf("Vetor invertido: ");
  for(i = 0; i < n; i++){
      printf("%d ", A[i]);
  }

  return 0;
}
// Questão 6
// Escreva uma função que receba um vetor de números reais (float) F e o seu tamanho
// n por parâmetro e devolva a média aritmética dos números do vetor.
// 1 float media(float F[], int n);

#include <stdio.h>

float media(float F[], int n){
    int i;
    float soma = 0;
    for(i = 0; i < n; i++){
        soma += F[i];
    }
    return soma/n;
}

int main(void) {
  int n, i;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  float F[n];

  for(i = 0; i < n; i++){
      printf("Digite o valor do elemento %d: ", i + 1);
      scanf("%f", &F[i]);
  }

  printf("Media: %.2f\n", media(F, n));

  return 0;
}
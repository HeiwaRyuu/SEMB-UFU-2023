/*
Questão 04
Dadas duas sequências v1 e v2 de n e m valores inteiros, com n ≤ m, escreva um
programa em C que verifique quantas vezes a primeira sequência v1 ocorre na segunda
v2.
*/

#include <stdio.h>

int main(){
  int n, m, contador = 0;

  printf("Digite o tamanho do vetor 1: ");
  scanf("%d", &n);

  printf("Digite o tamanho do vetor 2: ");
  scanf("%d", &m);

  int vetor1[n], vetor2[m];

  for(int i = 0; i < n; i++){
    printf("Digite o %dº número do vetor 1: ", i+1);
    scanf("%d", &vetor1[i]);
  }

  for(int i = 0; i < m; i++){
    printf("Digite o %dº número do vetor 2: ", i+1);
    scanf("%d", &vetor2[i]);
  }

  for(int i = 0; i < m; i++){
    if(vetor2[i] == vetor1[0]){
      for(int j = 0; j < n; j++){
        if(vetor2[i+j] != vetor1[j]){
          break;
        }
        if(j == n-1){
          contador++;
        }
      }
    }
  }

  printf("O vetor 1 ocorre %d vezes no vetor 2\n", contador);

  return 0;
}
/*
Questão 03
Escreva um programa em C que leia 10 números inteiros em um vetor. Em seguida, o
seu programa deve ler um outro número inteiro x. O programa deve então encontrar
dois números de posições distintas do vetor cuja multiplicação seja x e imprimi-los.
Caso não existam tais números, o programa deve informar isto.
*/


#include <stdio.h>

int main(){
  int vetor[10], x, multiplicacao, existe = 0;

  for(int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("Digite o número x: ");
  scanf("%d", &x);

  for(int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++){
    for(int j = i; j < sizeof(vetor)/sizeof(vetor[0]); j++){
      if(i != j){
        multiplicacao = vetor[i] * vetor[j];
        if(multiplicacao == x){
          printf("Os números %d e %d multiplicados dão %d\n", vetor[i], vetor[j], x);
          existe = 1;
          break;
        }
      }
    }
    if (existe == 1){
      break;
    }
  }

  if(existe == 0){
    printf("Não existem dois números no vetor que multiplicados dão %d\n", x);
  }

  return 0;
}
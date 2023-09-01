/*
Questão 01
Escreva um programa em C que leia 10 números inteiros em um vetor. Em seguida,
o seu programa deve encontrar a posição do maior elemento do vetor e imprimir esta
posição.
*/

#include <stdio.h>

int main(){
  int vetor[10], maior, posicao;

  for(int i = 0; i < 10; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

  maior = vetor[0];
  posicao = 0;

  for(int i = 0; i < 10; i++){
    if(vetor[i] > maior){
      maior = vetor[i];
      posicao = i;
    }
  }

  printf("O maior número é %d e está na posição %d [posicoes vao de 0 a 9]\n", maior, posicao);

  return 0;
}
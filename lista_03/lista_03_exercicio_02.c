/*
Questão 02
Escreva um programa em C que leia 10 números de ponto flutuante em um vetor.
Em seguida, o seu programa deve calcular a média dos valores armazenados no vetor
e imprimir este valor.
*/

#include <stdio.h>

int main(){
  float vetor[10], soma = 0, media;

  for(int i = 0; i < 10; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }

  media = soma / 10;

  printf("A média dos números é %.2f\n", media);

  return 0;
}
// Questão 1
// Escreva uma função que recebe dois pontos P1 = (x1, y1) e P2 = (x2, y2) e retorna a
// distância euclidiana entre esses pontos, ou seja:
// 1 float distancia(int x1,int y1,int x2,int y2);
// Em seguida, escreva um programa que receba como entrada os dois pontos e imprima
// a distância utilizando a função criada.


#include <stdio.h>
#include <math.h>

float distancia(int x1,int y1,int x2,int y2){
    float dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

int main(void) {
  int x1, y1, x2, y2;
  float dist;

  printf("Digite o valor de x1: ");
  scanf("%d", &x1);
  printf("Digite o valor de y1: ");
  scanf("%d", &y1);
  printf("Digite o valor de x2: ");
  scanf("%d", &x2);
  printf("Digite o valor de y2: ");
  scanf("%d", &y2);

  dist = distancia(x1, y1, x2, y2);

  printf("A distância entre os pontos é: %.2f", dist);

  return 0;
}
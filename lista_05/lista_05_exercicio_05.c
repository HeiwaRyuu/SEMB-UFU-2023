// Questão 5
// Escreva uma função que receba dois vetores A e B e o seus respectivos tamanhos por
// parâmetro verifica se os valores de B estão contidos (em qualquer ordem em A).
// int compara(int A[], int tamA, int B[], int tamB);

#include <stdio.h>

int compara(int A[], int tamA, int B[], int tamB){
    int i, j, cont = 0;
    for(i = 0; i < tamB; i++){
        for(j = 0; j < tamA; j++){
            if(B[i] == A[j]){
                cont++;
                break;
            }
        }
    }
    if(cont == tamB){
        return 1;
    }
    else{
        return 0;
    }
}


int main(void) {
  int tamA, tamB, i;

  printf("Digite o tamanho do vetor A: ");
  scanf("%d", &tamA);

  int A[tamA];

  for(i = 0; i < tamA; i++){
      printf("Digite o valor do elemento %d: ", i + 1);
      scanf("%d", &A[i]);
  }

  printf("Digite o tamanho do vetor B: ");
  scanf("%d", &tamB);

  int B[tamB];

  for(i = 0; i < tamB; i++){
      printf("Digite o valor do elemento %d: ", i + 1);
      scanf("%d", &B[i]);
  }

  if(compara(A, tamA, B, tamB)){
      printf("Os valores de B estao contidos em A\n");
  }
  else{
      printf("Os valores de B nao estao contidos em A\n");
  }

  return 0;
}
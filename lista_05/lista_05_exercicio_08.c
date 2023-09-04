// Questão 8
// Escreva uma função recursiva que computa o fatorial de um número n passado por
// parâmetro.
// long long int fat(int n);

#include <stdio.h>

long long int fat(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * fat(n - 1);
    }
}

int main(void) {
  int n;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  printf("Fatorial de %d: %lld\n", n, fat(n));

  return 0;
}
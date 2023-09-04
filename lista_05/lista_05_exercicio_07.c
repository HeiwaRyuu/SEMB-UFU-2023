// Questão 7
// O que faz a função abaixo?
// 1 void imprime_alguma_coisa(int n){
// 2 if (n != 0) {
// 3 imprime_alguma_coisa(n / 2);
// 4 printf("%c", '0' + n % 2);
// 5 }
// 6 }
// Escreva um programa para testar a função imprime_alguma_coisa().


// A FUNÇÃO ABAIXO IMPRIME O NÚMERO EM BINÁRIO
// POR EXEMPLO, SE O int n FOR 8, A FUNÇÃO IMPRIME 1000
// SE O int n for 10 A FUNÇÃO IMPRIME 1010 E ASSIM POR DIANTE

#include <stdio.h>

void imprime_alguma_coisa(int n){
    if (n != 0) {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
    }
}

int main(void) {
  int n;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  imprime_alguma_coisa(n);

  return 0;
}
// Questão 10
// Escreva uma função recursiva que calcula a potência a^b
// para valores a e b passados
// por parâmetro (não use bibliotecas como math.h).
// double pot(int a, int b);

#include <stdio.h>

double pot(int a, int b){
    if(b == 0){
        return 1;
    }
    else{
        return a * pot(a, b - 1);
    }
}

int main(void) {
  int a, b;

  printf("Digite a base: ");
  scanf("%d", &a);

  printf("Digite o expoente: ");
  scanf("%d", &b);

  printf("%d elevado a %d: %.2lf\n", a, b, pot(a, b));

  return 0;
}
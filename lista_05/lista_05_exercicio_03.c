// Questão 3
// Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro
// e determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso
// contrário.
// int amigos(int a, int b);
// Dois números são amigos se cada número é igual à soma dos divisores próprios do
// outro (os divisores próprios de um número m são os divisores estritamente menores
// que m).
// Exemplo:
// Os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma é
// 284; e os divisores próprios de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Logo, 220
// e 284 são números amigos.

#include <stdio.h>
#include <math.h>

int amigos(int a, int b){
    int i, soma_a = 0, soma_b = 0;
    for(i = 1; i < a; i++){
        if(a % i == 0){
            soma_a += i;
        }
    }
    for(i = 1; i < b; i++){
        if(b % i == 0){
            soma_b += i;
        }
    }
    if(soma_a == b && soma_b == a){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void) {
  int a, b;

  printf("Digite um número inteiro: ");
  scanf("%d", &a);
  printf("Digite outro número inteiro: ");
  scanf("%d", &b);

    if(amigos(a, b)){
            printf("%d e %d sao amigos\n", a, b);
    }
    else{
            printf("%d e %d nao sao amigos\n", a, b);
    }

  return 0;
}
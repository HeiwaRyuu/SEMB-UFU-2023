// Questão 2
// Escreva uma função que testa se um número i é primo.
// 1 int ehPrimo(int i);
// Depois, escreva um programa que receba como entrada um valor inteiro n e em
// seguida imprima todos os números primos de 1 até n utilizando a função ehPrimo()
// criada.


#include <stdio.h>
#include <math.h>

int ehPrimo(int i){
    int j, primo = 1;
    for(j = 2; j <= sqrt(i); j++){
        if(i % j == 0){
            primo = 0;
            break;
        }
    }
    return primo;
}

int main(void) {
  int n, i;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

	if(ehPrimo(n)){
			printf("%d eh primo\n", n);
	}
	else{
			printf("%d nao eh primo\n", n);
	}

  return 0;
}
/*
Questão 5
Reescreva o programa abaixo utilizando operadores lógicos (and, or e not).

Resposta:
*/
// Programa antes das alterações
# include <stdio.h>

int main(){
 int a;
 printf("Digite um número inteiro:");
 scanf("%d", &a);
 if( a % 2 == 0){
 if( a < 100)
 printf("O numero é par e menor que 100\n");
 else
 printf("O numero é par e maior ou igual a 100\n");
}else{
 if ( a < 100)
 printf("O numero é impar e menor que 100\n");
 else
 printf("O numero é impar e maior que 100\n");
}
 return 0;
}

// Programa depois das alterações (utilizando operadores lógicos and, or e not)
# include <stdio.h>

int main(){
 int a;
 printf("Digite um número inteiro:");
 scanf("%d", &a);
 if((a%2==0) && (a<100)) printf("O numero é par e menor que 100\n");
 if((a%2==0) && !(a<100)) printf("O numero é par e maior ou igual a 100\n");
 if(!(a%2==0) && (a<100)) printf("O numero é impar e menor que 100\n");
 if(!(a%2==0) && !(a<100)) printf("O numero é impar e maior que 100\n");

 return 0;
}


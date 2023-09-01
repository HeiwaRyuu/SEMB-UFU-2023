/*
Questão 7
Escreva um programa que leia um número inteiro e mostre o seu quadrado e seu
cubo. Por exemplo, se o número de entrada é 3, a saída deve ser 9 e 27.

Resposta:
*/

# include <stdio.h>

int main(){

 int n=0, quadrado=0, cubo=0;
 
 printf("Por favor, insira um valor inteiro para que seja calculado seu quadrado e seu cubo:");
 scanf("%d", &n);
 
 quadrado = n*n;
 cubo = n*n*n;
     
 printf("O numero informado foi %d\nO quadrado deste numero e %d\nE o cubo deste numero e %d", n, quadrado, cubo);

 return 0;
}
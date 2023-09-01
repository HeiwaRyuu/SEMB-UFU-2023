/*
Questão 6
Escreva um programa que leia um número n e que calcula o valor
Σ(i) de i=1 até n
OBS: Não use fórmulas como a da soma de uma P.A.

Resposta:
*/
# include <stdio.h>

int main(){
 int n=0, sum=0;
 printf("Por favor, entre com um valor inteiro para que se calcule seu somarial:\n");
 scanf("%d", &n);
 
 for(int i=0;i<=n;i++){
     sum+=i;
 }
 
 printf("O número informado foi %d e o resultado do seu somarial é de %d", n, sum);

 return 0;
}


/*
Questão 8
Faça um programa que leia um inteiro positivo n, em seguida leia n números do
teclado e apresente a soma destes números.

Resposta:
*/
# include <stdio.h>

int main(){
 int n=0, sum=0, k=0;
 
 printf("Por favor, entre com um numero inteiro de valores que deseja somar:\n");
 scanf("%d", &n);
 
 for(int i=0;i<n;i++){
     printf("Por favor, insira o %d° numero:\n", i+1);
     scanf("%d", &k);
     sum+=k;
 }
 
 printf("O resultado da soma dos numeros informados e de: %d\n", sum);
 
 return 0;
}


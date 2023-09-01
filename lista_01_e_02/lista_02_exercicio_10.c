/*
Questão 10
Escreva um programa que leia um valor inteiro positivo n e calcule o valor de n!

Resposta:
*/
# include <stdio.h>

int fatorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

int main(){
 int n=0, fat=0;
 
 printf("Por favor, entre com um numero inteiro para calcular seu fatorial:\n");
 scanf("%d", &n);
 fat = fatorial(n);
 printf("O fatorial do numero %d e = %d", n, fat);
 
 return 0;
}

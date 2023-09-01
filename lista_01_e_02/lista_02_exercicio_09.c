/*
Questão 9
Faça um programa que leia um inteiro positivo n, e imprima as potências: 2 elevado a 0, 2 elevado a 1, 2 elevado a 2, ..., 2 elevado a n.

Resposta:
*/
# include <stdio.h>

int power(int base, int expoente){
    int aux=base;
    if(expoente == 0){
        return 1;
    }
    else if(expoente == 1){
        return base;
    }
    else{
        for(int i=2;i<=expoente;i++){
            aux*=base;
        }
        return aux;
    }
    
}

int main(){
 int n=0;
 
 printf("Por favor, entre com um numero inteiro para vizualizar as potencias de 2 ate este numero informado:\n");
 scanf("%d", &n);
 
 for(int i=0;i<=n;i++){
     printf("2 elevado a %d = %d\n", i, power(2, i));
 }
 
 return 0;
}


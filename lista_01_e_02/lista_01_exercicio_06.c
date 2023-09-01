/*
Questão 6
Escreva um programa que leia três números inteiros e mostre como resultado a soma
desses três números e também a multiplicação desses três números.

Resposta:
*/

# include <stdio.h>

int main(){

 int num_lst[3];
 int mult_res = 1, sum_res = 0;
 char lst[][20] = { "primeiro", "segundo", "terceiro" };
 
 int i;
 for(i=0;i<3;i++){
     printf("Por favor, insira um valor inteiro para o %s numero:", lst[i]);
     scanf("%d", &num_lst[i]);
     sum_res += num_lst[i];
     mult_res *= num_lst[i];
    }
     
 printf("Os numeros informados foram %d, %d e %d\nO resultado da soma desses numeros e igual a %d\nE o resultado da multiplicacao desses numeros e igual a %d", num_lst[0], num_lst[1], num_lst[2], sum_res, mult_res);
     

 return 0;
}
/*
Questão 3
Escreva um programa na linguagem C que subtraia 14 de 73 e mostre o resultado na
saída padrão com uma mensagem apropriada.

Resposta:
*/

# include <stdio.h>
 
int main(){
 int a,b,c;
 a = 14, b = 73;
 c = a - b;
 printf("O resultado da subtracao de %d por %d (%d - %d) e igual a %d", a, b, a, b, c);
 return 0;
}
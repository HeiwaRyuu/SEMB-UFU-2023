/*
Questão 10
Faça um programa que troque os valores inteiros de duas variáveis x e y. Refaça este
problema sem o uso de outras variáveis que não x e y.

Resposta:
*/

// Primeira maneira (usando uma terceira variável auxiliar):
# include <stdio.h>

int main(){
 int x, y, aux;
 x = 10, y = 15, aux = 0;
 printf("Os valores das variaveis x e y antes de serem trocadas -> x = %d e y = %d\n", x, y);
 
 aux = x;
 x = y;
 y = aux;
 
 printf("Os valores das variaveis x e y depois de serem trocadas -> x = %d e y = %d", x, y);

 return 0;
}

// Segunda maneira (sem usar uma terceira variável auxiliar):
# include <stdio.h>

int main(){
 int x, y, aux;
 x = 10, y = 15;
 printf("Os valores das variaveis x e y antes de serem trocadas -> x = %d e y = %d\n", x, y);

 (x ^= y), (y ^= x), (x ^= y);
 
 printf("Os valores das variaveis x e y depois de serem trocadas -> x = %d e y = %d", x, y);

 return 0;
}
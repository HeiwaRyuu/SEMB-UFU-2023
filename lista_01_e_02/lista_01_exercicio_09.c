/*
Questão 9
O que será impresso pelo programa abaixo?

Resposta: Os valores impressos serão 1, 0 e 1 respectivamente. Nos prints do programa, o resultado é um inteiro igual a 0 ou 1, 
dependendo do resultado da álgebra booleana que foi inserida para checagem. No primeiro caso, foi inserido “9 > 3”, o que resulta em verdadeiro, 
pois 9 é maior que 3, logo o resultado dessa comparação é o inteiro 1. No segundo caso, foi inserida a comparação “(3*4)/2 != (2*3)”, ao desenvolver a conta, 
temos “6!=6”, o que é uma comparação falsa, pois 6 é igual a 6, e não diferente de 6, logo, o resultado é falso, imprimindo o inteiro 0. E por último, 
a comparação é entre duas variáveis “a”, com o valor inicial de 1, e “b”, com o valor inicial de -1. A comparação foi “a!=b”, ou seja, comparando se “a” 
é diferente de “b”, e como “a=1” e “b=-1”, é uma verdade, pois 1 é diferente de -1, imprimindo o valor de 1.
*/

# include <stdio.h>

int main(){
 int a, b;
 printf("%d\n", 9 > 3);
 printf("%d\n", (3*4)/2 != (2*3) );
 a = 1;
 b = -1;
 printf("%d\n", a!=b);

 return 0;
}
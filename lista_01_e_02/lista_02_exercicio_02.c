/*
Questão 2
O programa abaixo está correto? Justifique sua resposta.

Resposta: 
O programa está incorreto, pois o intuito do programa é dizer se o número informado é par ou não. 
Primeiramente, a checagem se o número é par está errada, pois da maneira como foi escrito, ele considera que são pares 
todos os números os quais a divisão por 2 deixa resto (na linha 6 -> “if (a % 2) printf ("O valor é par.\n");”), logo, ele considera par, 
todos os números ímpares. O correto seria “if ((a%2)==0) printf ("O valor é par.\n");”, pois nessa comparação, é considerado par todos os 
números que dividos por 2 não deixam resto. Além disso, seria interessante adicionar um print para caso o número seja ímpar, para informar 
o usuário de que o número não é par. 
*/

// Programa com erro:
# include <stdio.h>

int main(){
 int a;
 scanf("%d", &a);
 if (a % 2) printf ("O valor é par.\n");

 return 0;
}

// Programa corrigido:
# include <stdio.h>

int main(){
 int a;
 scanf("%d", &a);
 if ((a%2)==0) printf ("O valor é par.\n");
 else printf ("O valor é ímpar.\n");

 return 0;
}


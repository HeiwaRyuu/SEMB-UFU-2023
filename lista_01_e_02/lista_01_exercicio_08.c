/*
Questão 8
No exemplo abaixo, quais valores serão impressos?

Resposta: Os valores impressos serão 7, 6 e 6 respectivamente. O programa declara as variáveis “a”, “b” e “c”, 
inicializando “a” com o valor 5. Em seguida, “b” é atribuído o valor de “++a”, ou seja, aqui a operação de adicionar uma unidade na variável “a”, 
ocorre antes da atribuição do valor de “a” para “b”, fazendo com que “a” que possuía o valor 5, receba o valor 6, e então “b” receba esse novo valor de 6. 
Depois “c” recebe a atribuição de “a++”, ou seja, “c” recebe o valor atual de “a” antes da incrementação de uma unidade em “a”, 
logo “c” recebe o valor 6 e então “a” recebe uma unidade, sendo o valor final de “a” igual a 7.
*/

# include <stdio.h>

int main(){
 int a=5, b,c;
 b = ++a;
 c = a++;
 printf("a: %d \n", a);
 printf("b: %d \n", b);
 printf("c: %d \n", c);

 return 0;
}
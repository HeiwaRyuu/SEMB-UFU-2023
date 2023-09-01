/*
Questão 4
Qual o valor final na variável a?

Resposta: 
Resposta: O valor final da variável “a” no código é de -29. O código declara as variáveis “a”, “b” e “h” no escopo local, 
tendo elas o valor inicial que se encontra no endereço de memória a elas atribuído (lixo de memória). Em seguida são atribuídos os valores 
10, -15 e ‘A’ para “a”, “b” e “h” respectivamente, sendo o valor atual de “a” igual a 10. Depois é atribuído o valor de “b” para “a”, sendo o 
novo valor de “a” igual a -15. Adiciona-se uma unidade em “b”, tendo agora “b” o valor de -14. Atribui-se a “a” o valor atual de “a” somado ao 
valor atual de “b”, sendo “a = (-15) + (-14)”, sendo o valor final de “a” igual a -29.
*/

int main(){

 int a,b;
 char h;
 a = 10;
 b = -15;
 h = 'A';
 a = b;
 b++;
 a = (b+a);

 return 0;
}


/*
Questão 2
Identifique os erros no programa a seguir:

Resposta: 
Erro 1 - Linha 6 -> "float f;g;" ao invés de "float f,g;" separando as variáveis por ponto e vírgula ao invés de usar vírgula.
Erro 2 - Linha 7 -> "char h = 65;" ao invés de "char h = '65';" Iniciando uma variável do tipo char com um inteiro ao invés de usar uma string.
Erro 3 – Linha 9 -> “a, b = 10, 2;” ao invés de “a = 10, b = 2;” ao atribuir valores para as variáveis “a” e “b”
Erro 4 - Linha 11 -> "scanf("%f", g);" ao invés de "scanf("%f", &g);" para armazenar o dado corretamente no endereço de memória da variável "g", 
e também não há nenhuma mensagem informando que variável que deve ser inserida pelo usuário, nem o tipo de dado que deve ser inserido, sendo que esse comando é de interação com o usuário.
*/

// Programa com erros
# include <stdio.h>

int main(){

 int a,b;
 float f;g; // Erro 1 - Linha 6 -> "float f;g;" ao invés de "float f,g;" separando as variáveis por ponto e vírgula ao invés de usar vírgula.
 char h = 65; // Erro 2 - Linha 7 -> "char h = 65;" ao invés de "char h[2] = '65';" Iniciando uma variável do tipo char com um inteiro ao invés de usar uma string e sem informar o tamanho do array.

 a, b = 10, 2; // Erro 3 – Linha 9 -> “a, b = 10, 2;” ao invés de “a = 10, b = 2;” ao atribuir valores para as variáveis “a” e “b”
 f = 75;
 scanf("%f", g); //Erro 4 - Linha 11 -> "scanf("%f", g);" ao invés de "scanf("%f", &g);" para armazenar o dado corretamente no endereço de memória da variável "g", 
                  //e também não há nenhuma mensagem informando que variável que deve ser inserida pelo usuário, sendo que esse comando é de interação com o usuário.

 return 0;
}

// Programa corrigido
# include <stdio.h>

int main(){

 int a,b;
 float f,g;
 char h[2] = '65';

 a = 10, b = 2;
 f = 75;
 printf("por favor entre com o valor de g -> \n");
 scanf("%f", &g);

 return 0;
}
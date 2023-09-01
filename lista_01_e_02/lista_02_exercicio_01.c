/*
Questão 1
Qual o valor armazenado na variável a no fim do programa?

Resposta: Será impresso 0, 1, 1 respectivamente. Os prints do programa dependem dos resultados das álgebras booleanas, sendo assim, 
quando o resultado for verdadeiro, o print será 1, e caso seja falso, o print será 0. No primeiro print, a comparação feita é “(8>9) && (10!=2)”, 
assim, a primeira parte “8>9” é falsa, e a segunda parte “10!=2” é verdadeira, e o operando entre essas 2 comparações é um “and/e”, sendo assim, 
pela tabela verdade com os inputs “falso e verdadeiro”, o resultado final é falso, sendo o resultado 0. No segundo print, a comparação é 
“(14 > 100) || (2>1)”, a primeira parte “14>100” é falsa, e a segunda parte “2>1” é verdadeira, e o operando entre essas 2 comparações é o “or/ou”, 
sendo assim, pela tabela verdade, com os inputs “falso ou verdadeiro”, o resultado é verdadeiro, resultando em 1. E por fim, no último print a comparação é 
“!(14>100) && !(1>2)”, sendo a primeira parte “!(14>100)” a negação de uma comparação falsa, logo, se torna uma comparação verdadeira, e a segunda parte “!(1>2)” 
a negação de outra afirmação falsa, se tornando verdadeira, e o comparador entre essas duas é um “and/e”, com os inputs “verdadeiro e verdadeiro”, retornando no final verdadeiro, logo, o último print é 1.
*/

#include <stdio.h>

int main(){
 printf("%d\n", (8>9) && (10!=2));
 printf("%d\n", (14 > 100) || (2>1));
 printf("%d\n", ( !(14>100) && !(1>2) ) );

 return 0;
}


/*
Questão 5
No exemplo abaixo, quais valores serão impressos?

Resposta: 
Os valores impressos serão 2 (inteiro), 2.5 (float) e 2.5 (float) respectivamente. Isso ocorre pois, no primeiro print, o resultado é a divisão de dois inteiros "a=5" e "b=2"
resultando em um outro inteiro arredondado para baixo (floor) igual a 2. Já no segundo valor impresso, é o resultado da divisão de um inteiro "a=5" e um float "d=2.0",
sendo assim, o resultado da divisão é um float, resultando em 2.5. E no último print, está o resultado da divisão entre 2 floats, "c=5.0" e "d=2.0", sendo o 
resultado da divisão também um float igual a 2.5.
*/

# include <stdio.h>

 int main(){

 int a=5, b=2;
 float c=5.0;
 double d=2.0;
 printf("%d \n", a/b);
 printf("%f \n", a/d);
 printf("%f \n", c/d);

 return 0;
}
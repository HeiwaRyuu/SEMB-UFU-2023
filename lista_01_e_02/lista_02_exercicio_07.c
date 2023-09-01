/*
Questão 7
Dado o programa a seguir, o que acontece se o usuário digitar 0?

Resposta: Se o usuário entrar com o valor “n” igual a 0, o programa executará apenas a primeira iteração do “do-while” e finalizará. 
Dado que inicialmente “i” é definido como 1 e o loop continuará até que "i" seja maior do que 0, o loop nunca será executado quando “n” é 0, 
pois na primeira vez que a condição for checada, “i<=n” é igual a “1<=0” que é falso, logo o loop não executa mais. 
*/

# include <stdio.h>

int main(){
 int i, n;

 scanf("%d", &n);
 i=1;
do{
 printf("%d\n",i);
 i = i+1;
} while(i <= n);
}



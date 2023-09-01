/*
Questão 1
Qual o valor armazenado na variável a no fim do programa?

Resposta: O valor da variável “a” no final será de 8. Inicialmente todas as variáveis “a”, “b”, “c” e “d” foram declaradas como inteiros, 
sem nenhuma atribuição, tendo os seus respectivos valores iguais aos que se encontram no endereço de memória atribuídos a cada uma delas 
(lixo de memória, por serem variáveis de escopo local). Depois, foram atribuídos para as variáveis locais “d”, “c” e “b” os valores 3, 2 e 4 respectivamente. 
Em seguida “d” foi atribuído o novo valor de “c+b”, igual a “2+4”, logo “d” agora possui o valor de 6. Agora “a” foi atribuído o valor de “d+1”, igual a “6+1”, logo “a” possui o valor 7. 
E por último, “a” foi atribuído o novo valor de “a+1”, igual a “7+1”, sendo o valor final da variável “a” igual a 8.
*/

#include<stdio.h>

int main(){

    int a, b, c, d;
    d = 3;
    c = 2;
    b = 4;
    d = c + b;
    a = d + 1;
    a = a + 1;
    printf("valor de a: %d", a);

    return 0;
}
// Questão 9-
// (a) Faça um programa em C que leia do teclado uma string de até 80 caracteres e
// que então salve a inversa desta string em uma nova.
// (b) Refaça o programa anterior, de tal forma que não seja utilizado nenhum vetor
// adicional! Ou seja, devemos computar a inversa no próprio vetor original da
// string lida


#include <stdio.h>
#include <string.h>

int main() {
    char str[80], output[80];
    int i, j, len;

    printf("Digite uma string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        output[i] = str[len - i - 1];
    }

    printf("%s\n", output);

    return 0;
}

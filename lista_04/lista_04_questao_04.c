// Questão 4-
// Faça um programa em C que leia do teclado uma string de até 80 caracteres e
// transforme todas as letras maiúsculas em minúsculas.
// Exemplo:
// Out of The Night that CovErs me
// Resultado:
// out of the night that covers me


#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int i, len;

    printf("Digite uma string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    printf("%s\n", str);

    return 0;
}
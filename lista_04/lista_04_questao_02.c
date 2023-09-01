// Questão 2-
// Faça um programa em C que leia do teclado uma string de até 80 caracteres e
// que salve a string lida em uma nova removendo os espaços extras apenas entre as
// palavras.

// Exemplo:
// Out           of the      night that    covers me
// Resultado:
// Out of the night that covers me


#include <stdio.h>
#include <string.h>

int main() {
    char str[80], output[80];
    int i, j, len;
    int space_flag = 1;

    printf("Digite uma string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != ' '){
            output[j] = str[i];
            j++;
            space_flag = 0;
        }
        else{
            if (space_flag == 0) {
                output[j] = str[i];
                j++;
                space_flag = 1;
            }
        }
    }

    printf("%s\n", output);

    return 0;
}

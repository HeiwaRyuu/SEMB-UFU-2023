// Questão 3-
// Faça um programa em C que leia três strings e concatene todas as strings em ordem
// alfabetica.

#include <stdio.h>
#include <string.h>

int main() {
    char strings_iniciais[3][80], output_str[240];

    printf("Digite a primeira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", strings_iniciais[0]);
    
    printf("Digite a segunda string (até 80 caracteres): ");
    scanf("%[^\n]%*c", strings_iniciais[1]);

    printf("Digite a terceira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", strings_iniciais[2]);


    // ordenando as strings em ordem alfabética
    for (int i = 0; i < 3-1; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(strings_iniciais[i], strings_iniciais[j]) > 0) {
                char aux[80];
                strcpy(aux, strings_iniciais[i]);
                strcpy(strings_iniciais[i], strings_iniciais[j]);
                strcpy(strings_iniciais[j], aux);
            }
        }
    }
    
    // concatenando as strings em ordem alfabética
    for (int i = 0; i < 3; i++) {
        if (i == 0)
            strcpy(output_str, strings_iniciais[i]);
        else
            strcat(output_str, strings_iniciais[i]);
    }
    


    printf("\nConcatenadas em ordem alfabética:\n%s\n", output_str);

    return 0;
}

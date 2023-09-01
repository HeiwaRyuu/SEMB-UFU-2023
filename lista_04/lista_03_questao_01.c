// Questão 1
// Faça um programa que leia do teclado duas string (possivelmente com espaços) de
// até 80 caracteres e que retorne:
// •0 se as strings são iguais
// •-1 se str1 é lexograficamente menor do que str2
// •1 caso contrário

#include <stdio.h>
#include <string.h>

int main() {
    char str1[80], str2[80];
    
    printf("Digite a primeira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str1);
    
    printf("Digite a segunda string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("0\n");
    } else if (result < 0) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}
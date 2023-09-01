// Questão 5-
// Escreva um programa em C que leia duas strings do teclado e determina se a
// segunda é um anagrama da primeira.
// Exemplos de anagramas:
// • ROMA, MORA, ORAM, AMOR e RAMO

#include <stdio.h>
#include <string.h>

int main() {
    char str1[80], str2[80];
    int i, j, len1, len2, checksum=0;
    int flag = 0;

    printf("Digite a primeira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str1);

    printf("Digite a segunda string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Não é um anagrama\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                checksum += 1;
                break;
            }
        }
    }

    if (checksum != len1)
        printf("Não é um anagrama\n");
    else

    printf("É um anagrama\n");

    return 0;
}
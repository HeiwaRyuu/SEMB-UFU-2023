// Questão 6-
// Faça um programa em C que leia duas strings do teclado e elimine, da segunda
// string, todas as ocorrências dos caracteres da primeira string.


#include <stdio.h>
#include <string.h>

int return_char_pos(char *str, char c) {
    int i, len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == c)
            return i;
    }

    return -1;
}   

void remove_char(char *str, int pos) {
    int i, len = strlen(str);

    for (i = pos; i < len; i++) {
        str[i] = str[i + 1];
    }
}


int main() {
    char str1[80], str2[80], chars[80];
    int i, j, len1, len2, len_chars, char_pos;

    printf("Digite a primeira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str1);

    printf("Digite a segunda string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    for (i = 0; i < len1; i++) {
        if (i==0){
            chars[i] = str1[i];
        }
        else{
            len_chars = strlen(chars);
            for (j = 0; j < len_chars; j++) {
                if (str1[i] == chars[j]) {
                    break;
                }
                else if (j == i - 1) {
                    chars[i] = str1[i];
                }
            }
        }
        
    }

    for (i = 0; i < len_chars; i++) {
        while ((char_pos = return_char_pos(str2, chars[i])) != -1){
            remove_char(str2, char_pos);
        }
    }

    printf("string2 sem os caracteres da string1:%s\n", str2);

    return 0;
}
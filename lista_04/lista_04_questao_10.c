// Questão 10-
// Escreva um programa que leia uma string de até 80 caracteres, e verifica se a string
// lida é ou não um “Palindromo”. Assuma que só são usados caracteres minúsculos e
// sem acentos. Espaços em brancos devem ser descartados.
// saudavel leva duas.


#include <stdio.h>
#include <string.h>

int main() {
    char str[80], output[80], aux;
    int i, j, len, checksum=0;
    int space_flag = 1;

    printf("Digite uma string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str);

    len = strlen(str);

    // limpar espaços
    for (i = 0; i < len; i++) {
        if(str[i] == ' '){
            for (j = i; j < len; j++) {
                str[j] = str[j+1];
            }
            len--;
        }
    }

    for (i = 0; i < len; i++) {
        output[i] = str[len - i - 1];
    }

    for (i = 0; i < len; i++) {
        if(output[i] == str[i]){
            checksum += 1;
        }
        else{
            break;
        }
    }

    if (checksum != len)
        printf("Não é um palíndromo\n");
    else
        printf("É um palíndromo\n");

    return 0;
}
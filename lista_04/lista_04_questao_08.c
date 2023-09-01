// Questão 8-
// Faça um programa em C que leia duas strings T1 e T2 e verifique se T1 é subsequência
// de T2, ou seja, se T1 pode ser obtida por meio da remoção de letras de T2. A ordem
// das letras não pode ser alterada.
// Exemplos de subsequências:
// moda moradia
// cereja cerveja

#include <stdio.h>
#include <string.h>

int pesquisa_letra(char *str, int start, char c, int *checksum)
{
    int i, len = strlen(str);

    for (i = start; i < len; i++) {
        if (str[i] == c) {
            *checksum += 1;
            break;
        }
    }

    return i;
}

void checa_subsequencia(char *str1, char *str2, int len1, int len2, int *checksum)
{
    int i, j, start;

    for (i = 0; i < len1; i++) {
        if(i==0)
        {
            start = pesquisa_letra(str2, i, str1[i], checksum);
        }
        else
        {
            if(start > len2)
                break;
            else
                start = pesquisa_letra(str2, start, str1[i], checksum);
        }
    }
}

int main() {
    char str1[80], str2[80];
    int i, j, start, len1, len2, checksum=0;
    int flag = 0;

    printf("Digite a primeira string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str1);

    printf("Digite a segunda string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > len2) {
        printf("Não é uma subsequência\n");
        return 0;
    }

    // Checando se é uma subsequência
    checa_subsequencia(str1, str2, len1, len2, &checksum);

    printf("checksum: %d\n", checksum);

    if (checksum != len1)
        printf("Não é uma subsequência\n");
    else
        printf("É uma subsequência\n");

    return 0;
}
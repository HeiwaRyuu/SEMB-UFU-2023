// Questão 7-
// Faça um programa em C que leia a string T e outra string p do teclado. Em
// seguida o programa deverá imprimir todas as posições onde ocorrem p em T .
// Exemplo: T = "Duas bananas e 4 abacates. Nao havera mais bananas. Bananas e
// peras", e p ="bananas", então o programa deve imprimir 5 e 43.


#include <stdio.h>
#include <string.h>

int main() {
    char T[80], p[80];
    int i, j, len_T, len_p, flag = 0;

    printf("Digite a string T (até 80 caracteres): ");
    scanf("%[^\n]%*c", T);

    printf("Digite a string p (até 80 caracteres): ");
    scanf("%[^\n]%*c", p);

    len_T = strlen(T);
    len_p = strlen(p);

    for (i = 0; i < len_T; i++) {
        if (T[i] == p[0]) {
            for (j = 0; j < len_p; j++) {
                if (T[i + j] != p[j])
                    break;
                else if (j == len_p - 1) {
                    printf("%d ", i);
                    flag = 1;
                }
            }
        }
    }

    if (flag == 0)
        printf("Não há ocorrências de p em T.\n");

    return 0;
}
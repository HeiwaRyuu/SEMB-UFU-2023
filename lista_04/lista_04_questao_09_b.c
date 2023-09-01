// (b) Refaça o programa anterior, de tal forma que não seja utilizado nenhum vetor
// adicional! Ou seja, devemos computar a inversa no próprio vetor original da
// string lida
#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int i, j, len;
    char aux;

    printf("Digite uma string (até 80 caracteres): ");
    scanf("%[^\n]%*c", str);

    len = strlen(str);

    for (i = 0; i < len/2; i++) {
        aux = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = aux;
    }

    printf("%s\n", str);

    return 0;
}
#include <stdio.h>

int main() {
    int num, invertido = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("numero invalido. Digite um valor positivo.\n");
    } else {
        while (num != 0) {
            invertido = invertido * 10 + num % 10;
            num = num / 10;
        }

        printf("neumero invertido: %d\n", invertido);
    }

    return 0;
}

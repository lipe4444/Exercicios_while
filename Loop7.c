#include <stdio.h>

int main() {
    int num, i = 1, soma = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("nusmero invalido. Digite um valor maior que zero.\n");
    } else {
        while (i < num) {
            if (num % i == 0) {
                soma += i;
            }
            i++;
        }

        if (soma == num) {
            printf("%d e um numero perfeito!\n", num);
        } else {
            printf("%d nao e um numero perfeito.\n", num);
        }
    }

    return 0;
}

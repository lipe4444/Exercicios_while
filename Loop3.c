#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
        return 1;
    }

    while (num > 1) {
        fatorial *= num; // fatorial = fatorial * num;
        num--;
    }

    printf("Fatorial: %d\n", fatorial);
    return 0;
}

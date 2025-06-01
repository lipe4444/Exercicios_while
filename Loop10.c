#include <stdio.h>

int main() {
    int num, resto, binario = 0, multiplicador = 1;

    printf("digite um numero decimal: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("numero invalido. digite um valor positivo.\n");
    } else if (num == 0) {
        printf("binario: 0\n");
    } else {
        while (num != 0) {
            resto = num % 2;
            binario = binario + resto * multiplicador;
            multiplicador = multiplicador * 10;
            num = num / 2;
        }

        printf("binario: %d\n", binario);
    }

    return 0;
}

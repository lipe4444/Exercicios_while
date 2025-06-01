#include <stdio.h>

int main() {
    int num, max, min;
    int primeiro = 1;  // flag para saber se é o primeiro número

    printf("digite numeros inteiros:\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (primeiro) {
            max = num;
            min = num;
            primeiro = 0;
        } else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }

    if (primeiro) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("maximo = %d, minimo = %d\n", max, min);
    }

    return 0;
}

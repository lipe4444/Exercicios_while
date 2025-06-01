#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, proximo;
    int i = 0;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida. Digite um valor maior que 0.\n");
    } else {
        printf("Sequencia de Fibonacci com %d termos:\n", n);

        while (i < n) {
            if (i == 0) {
                printf("0");
            } else if (i == 1) {
                printf(", 1");
            } else {
                proximo = a + b;
                printf(", %d", proximo);
                a = b;
                b = proximo;
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}

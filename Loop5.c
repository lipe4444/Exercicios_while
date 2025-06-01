#include <stdio.h>
int main(){
    int pares=0, impares=0, digito, numero;
    printf("digite um numero inteiro:");
    scanf("%d", &numero);
    
    if(numero>0){
        while (numero > 0) {
        digito = numero % 10; 
        if (digito % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        numero /= 10;
        }
    }
    printf("%d pares, %d impares\n", pares, impares);
    return 0;
}

#include <stdio.h>

int main(){
    int notas, media, repetir=1, soma=0, dividir=0;
    while (repetir){
        printf("digite as notas");
        scanf("%d", &notas);
        if (notas >= 0 && notas <= 10){
            soma = notas + soma;
            dividir++;
        }else repetir=0;
    }
    media= soma/dividir;
    printf("media: %d", media);
}

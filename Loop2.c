#include <stdio.h>

int main(){
    int num, repetir = 1, resultado;
    printf("inicio da soma\n");
    while (repetir){
            scanf("%d", &num);
        if(num!=0){
            resultado = resultado+num;
        }else{
            repetir = 0;
        }

    }
    printf("%d", resultado);
    return 0;
}

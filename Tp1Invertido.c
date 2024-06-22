#include<stdio.h>
int main(){
    int digito, numero;
    scanf("%d", &numero);
    while(numero > 0){
        digito = numero %10;
        printf("%d", digito);
        numero /= 10;
    }
}

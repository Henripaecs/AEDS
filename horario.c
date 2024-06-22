#include<stdio.h>

int verificar(int n);

int main(){
    int n,ver;
    printf("DIGITE UM NUMERO:");
    scanf("%d", &n);
    ver = verificar(n);
    if(ver == 1){
        printf("POSITIVO");
    }else{
        printf("NEGATIVO");
    }
}
int verificar(int n){
    int res;
    if(n >= 0){
        res = 1;
    }
    if(n < 0){
        res = 0;
    }
    return res;
}

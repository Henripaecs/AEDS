#include<stdio.h>

int main(){

    int m,a,b,c;

    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    if(40 <= m <=110 && 1 <= a < m && 1 <= b < m && a != b){
        c = (a+b-m)*-1;
        if(a > b && a > c){
            printf("%d", a);
        }
        if(b > a && b > c){
            printf("%d", b);
        }
        if(c > a && c > b){
            printf("%d", c);
        }
    }else{
        printf("Erro");
        return 1;
    }
    return 0;
}

#include<stdio.h>

int main(){
    int d, cont=0;

    scanf("%d", &d);
    for(int i = 1; i <= d; i++){
        if(d%i==0){
            cont++;
        }
    }
    printf("%d", cont);
}

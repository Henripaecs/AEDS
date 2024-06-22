#include<stdio.h>

int main(){
    int n,c1=0,c2=0,c3=0,c4=0,cn=0;
    float cb=0,ct=0, a;

    while(n!=0){
        scanf("%d", &n);
        if(n >= 1 && n <= 6){
            ct++;
            if(n==1){
                c1++;
            }
            if(n==2){
                c2++;
            }
            if(n==3){
                c3++;
            }
            if(n==4){
                c4++;
            }
            if(n==5){
                cn++;
            }
            if(n==6){
                cb++;
            }
        }
    }
    printf("%d %d %d %d\n", c1,c2,c3,c4);
    printf("%d\n", cn);
    printf("%.2f\n", (cb/ct)*100);
}

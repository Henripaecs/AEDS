#include<stdio.h>
#include<math.h>

int main(){
    int t, exp=0, resp=0;
    scanf("%d", &t);
    int vetor[t];
    for(int i = 0; i<t; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = t-1; i>=0; i--){
        resp += vetor[i]*pow(2,exp);
        exp++;
    }
    printf("%d", resp);
}

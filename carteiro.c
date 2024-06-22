#include<stdio.h>

int main(){
    int n,m,cont = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int vetn[n], vetm[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetn[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &vetm[i]);
    }
    for(int i = vetn[0]; i < n; i++){
        for(int j =  vetm[0]; j < m; j++){
            if(n == m){
                cont++;
            }
        }
    }
    printf("%d", cont);
}

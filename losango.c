#include <stdio.h>
int cont = 0;
int cont2 = 0;

void imprime(char a, int n){
    cont++;
    for(int i =0; i< n; i++){
        printf("%c", a);
    }
}
void los (int a, int b){
    cont2++;
    imprime(' ', a-1);
    imprime('*', 2*b+1);
    printf("\n");
    if (a == 1)
        return;
    los(a-1, b+1);
    imprime(' ', a-1);
    imprime('*', 2*b+1);
    printf("\n");
}

int main(){
    int num;
    scanf("%d", &num);
    num = num/2+1;
    los(num, 0);

}

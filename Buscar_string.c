#include<stdio.h>
#include<string.h>

void low(char*);

void low(char *str){
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
}
int main(){
    int n;
    char palavra[100];

    scanf("%d", &n);
    getchar();

    fgets(palavra, 100, stdin);
    palavra[strcspn(palavra, "\n")] = 0;

    low(palavra);

    int count = 0;
    char str[1000];

    for(int i = 0; i < n; i++){
        fgets(str, 1000, stdin);
        str[strcspn(str, "\n")] = 0;

        char strlow[1000];
        strcpy(strlow, str);
        low(strlow);

        if(strstr(strlow, palavra) != NULL){
            count++;
        }
    }
    printf("%d\n", count);
}

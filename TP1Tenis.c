#include<stdio.h>

int main(){
    int i, g, win = 0;
    char j[6];

    for(i=0; i<6; i++){
        scanf(" %c", &j[i]);

        if(j[i]== 'V'){
            win++;
        }
    }
    if(win >= 5){
        g = 1;
    }else if(win >= 3){
        g = 2;
    }else if(win >= 1){
        g = 3;
    }else{
        g = -1;
    }
    printf("%d", g);
}

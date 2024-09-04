//846431_Henrique_Paes_de_Carvalho

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void exercicio_0411() {
    int x = 0, contd = 0, contf = 0;
    double a = 0.0, b = 0.0, y = 0.0;

    printf("Digite a quantidade de valores que deseja ler: ");
    scanf("%d", &x); getchar();
    printf("Digite os dois intervalos fechados: ");
    scanf("%lf %lf", &a, &b); getchar();

    printf("Digite os %d valores que deseja: ", x);
    for(int i = 0; i < x; i++){
        scanf("%lf", &y); getchar();
        if(y >= a && y <= b || y <= a && y >= b){
            contd++;//contador dos que estao dentro do intervalo
        }else{
            contf++;//cantar os de fora
        }
    }
    printf("%d numeros estao dentro do intervalo[%.2lf:%.2lf]\n", contf,a,b);
    printf("%d numeros estao fora do intervalo[%.2lf:%.2lf]\n", contd,a,b);

}/*Escolha um exercicio (1 a 12) sendo 11 e 12 os extras
                E 0 para sair:
1
Digite a quantidade de valores que deseja ler: 10
Digite os dois intervalos fechados: 14.6 22.6
Digite os 10 valores que deseja: 5.1 10.5 12.4 14.2 15.3 18.3 20.4 21.7 23.1 24.2
6 numeros estao dentro do intervalo[14.60:22.60]
4 numeros estao fora do intervalo[14.60:22.60]*/

void exercicio_0412() {
    char caracter[100];
    int cont = 0;

    printf("Digite uma cadeia de caracter: ");
    fgets(caracter, 100, stdin);
    caracter[strcspn(caracter, "\n")] = '\0';

    for(int i = 0; i < strlen(caracter); i++){
        if(caracter[i] >= 'a' && caracter[i] < 'm'){
            cont++;
        }
    }
    printf("%d caracteres sao minusculas e menores que M\n", cont);

}/*Escolha um exercicio (1 a 12) sendo 11 e 12 os extras
                E 0 para sair:
2
Digite uma cadeia de caracter: AaKkLmM0*Nx
2 caracteres sao minusculas e menores que M*/

void exec_413_contar(char c[], int cont){//funcao para o 413
    for(int i = 0; i < strlen(c); i++){
        if(c[i] >= 'a' && c[i] < 'm'){
            cont++;
        }
    }
    printf("%d caracteres sao minusculas e menores que M\n", cont);
}

void exercicio_0413() {
    char caracter[100];
    int cont = 0;

    printf("Digite uma cadeia de caracter: ");
    fgets(caracter, 100, stdin);
    caracter[strcspn(caracter,"\n")] = '\0';

    exec_413_contar(caracter, cont);//funcao do para definir se e maiuscula
}/*Escolha um exercicio (1 a 12) sendo 11 e 12 os extras
                E 0 para sair:
3
Digite uma cadeia de caracter: AaKkLmM0*Nx
2 caracteres sao minusculas e menores que M*/

void exercicio_0414() {

}/**/

void exec_415_contar(char c[], int contm, int contM){//funcao para o 415
    for(int i = 0; i < strlen(c); i++){
        if(c[i] >= 'a' && c[i] < 'm'){
            contm++;
        }
        if(c[i] >= 'A' && c[i] < 'M'){
            contM++;
        }
    }
    printf("%d caracteres sao minusculas e menores que M\nE %d caracteres sao maiusculos e menores que M\n", contm, contM);
}

void exercicio_0415() {
    char caracter[100];
    int contm = 0, contM = 0;

    printf("Digite uma cadeia de caracter: ");
    fgets(caracter, 100, stdin);
    caracter[strcspn(caracter,"\n")] = '\0';

    exec_415_contar(caracter, contm,contM);
}/*Escolha um exercicio (1 a 12) sendo 11 e 12 os extras
                E 0 para sair:
5
Digite uma cadeia de caracter: AaKkLmM0*Nx
2 caracteres sao minusculas e menores que M
E 3 caracteres sao maiusculos e menores que M*/

void exercicio_0416() {

}/**/

void exercicio_0417() {

}/**/

void exercicio_0418() {


}/**/

void exercicio_0419() {

}/**/

void exercicio_0420() {


}/**/

void exercicio_04E1() {

}/**/

void exercicio_04E2() {

}/**/

int main(){
    int option;
    printf("\t846431 Henrique Paes de Carvalho\n");
    do {
        printf("Escolha um exercicio (1 a 12) sendo 11 e 12 os extras\n\t\tE 0 para sair:\n");
        scanf("%d", &option); getchar( );

        switch (option) {
            case 1:
                exercicio_0411();
                break;
            case 2:
                exercicio_0412();
                break;
            case 3:
                exercicio_0413();
                break;
            case 4:
                exercicio_0414();
                break;
            case 5:
                exercicio_0415();
                break;
            case 6:
                exercicio_0416();
                break;
            case 7:
                exercicio_0417();
                break;
            case 8:
                exercicio_0418();
                break;
            case 9:
                exercicio_0419();
                break;
            case 10:
                exercicio_0420();
                break;
            case 11:
                exercicio_04E1();
                break;
            case 12:
                exercicio_04E2();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (option != 0);
}

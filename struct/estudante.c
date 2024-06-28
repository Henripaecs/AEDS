#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    int idade;
    float media;
}estudante;

void addEstudante(estudante estudantes[], int *qnt){
    printf("Digite o nome: ");
    scanf("%49s", estudantes[*qnt].nome);
    printf("Digite a matricula: ");
    scanf("%d", &estudantes[*qnt].matricula);
    printf("Digite a idade: ");
    scanf("%d", &estudantes[*qnt].idade);
    printf("Digite a media: ");
    scanf("%f", &estudantes[*qnt].media);
    (*qnt)++;
}
void printEstudante(estudante estudantes[], int qnt){
    for(int i = 0; i <  qnt; i++){
        printf("\n%s", estudantes[i].nome);
        printf("\n%d", estudantes[i].matricula);
        printf("\n%d", estudantes[i].idade);
        printf("\n%.2f\n", estudantes[i].media);
    }
}
void buscarEstudante(estudante estudantes[], int qnt, int matricula){
    for(int i = 0; i <  qnt; i++){
        if(estudantes[i].matricula == matricula){
            printf("\n%s", estudantes[i].nome);
            printf("\n%d", estudantes[i].matricula);
            printf("\n%d", estudantes[i].idade);
            printf("\n%.2f\n", estudantes[i].media);
        }
    }
    printf("Estudadnte %d nao encontrado", matricula);
}
int main(){
    estudante estudantes[100];
    int qnt = 0, escolha, matricula;
    do{
        printf("\n====================================\n");
        printf("1 - Adicionar estudante\n2 - Exibir estudadntes\n3 - Buscar estudante\n4 - sair\n");
        printf("\n====================================\n");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                addEstudante(estudantes, &qnt);
                break;
            case 2:
                printEstudante(estudantes, qnt);
                break;
            case 3:
                printf("Digite a matricula do estudante que deseja:");
                scanf("%d", &matricula);
                buscarEstudante(estudantes, qnt, matricula);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(escolha != 4);
}

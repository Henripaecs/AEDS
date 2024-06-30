#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[50];
    int idade;
    int matricula;
    float nota[3];
    float media;
}aluno;
void media(aluno *aluno){
    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma += aluno->nota[i];
    }
    aluno->media = soma/3;
}
void preencher(aluno *aluno){
    scanf("%s", aluno->nome);
    scanf("%d", &aluno->idade);
    scanf("%d", &aluno->matricula);
    for(int i = 0; i < 3; i++){
        scanf("%f", &aluno->nota[i]);
    }
}
void imprimir(aluno aluno){
        printf("\nNome: %s", aluno.nome);
        printf("\nIdade: %d", aluno.idade);
        printf("\nMatrícula: %d", aluno.matricula);
        printf("\nMédia das notas: %.2f\n", aluno.media);
}

int main(){
    aluno aluno[3];
    for(int i = 0; i < 3; i++){
        printf("\nAluno\n");
        preencher(&aluno[i]);
        media(&aluno[i]);
    }
    for(int i = 0; i < 3; i++) {
        printf("\nDados do Aluno\n");
        imprimir(aluno[i]);
    }

}

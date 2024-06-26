#include<stdio.h>
#include<string.h>

typedef struct cadastro{
    int codigo;
    char nome[20];
    char email[50];
    float salario;
}cadastro;

void preencher(cadastro cadastro[]){
    for(int i = 0; i < 5; i++){
        printf("DIGITE O CODIGO: ");
        scanf("%d", &cadastro[i].codigo);
        printf("DIGITE O NOME: ");
        scanf("%s", cadastro[i].nome);
        printf("DIGITE O EMAIL: ");
        scanf("%s", cadastro[i].email);
        printf("DIGITE O SALARIO: ");
        scanf("%f", &cadastro[i].salario);
        printf("\n");
    }
}

void arquivo(cadastro cadastro[]){
    FILE *arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL){
        printf("ERRO!");
        return;
    }
    for(int i = 0; i < 5; i++){
        if(cadastro[i].codigo != -1){
            fprintf(arquivo, "\n%d %s %s %.2f \n", cadastro[i].codigo, cadastro[i].nome, cadastro[i].email, cadastro[i].salario);
        }
    }
    fclose(arquivo);
}
void excluir(cadastro cadastro[], int codigo){
    for(int i = 0; i < 5; i++){
        if(codigo == cadastro[i].codigo){
            cadastro[i].codigo = -1;
            strcpy(cadastro[i].nome, "");
            strcpy(cadastro[i].email, "");
            cadastro[i].salario = 0;
            printf("\nCadastro excluido com sucesso\n.");
        }else{
            printf("\nCodigo inexistente\n");
        }
    }
}
float salarios(cadastro cadastro[], float tsalario){
    for(int i = 0; i < 5; i++){
        tsalario += cadastro[i].salario;
    }
    return tsalario;
}

int main(){
    cadastro cadastro[5];


    int escolha;
    while (1) {
        printf("\nMenu:\n");
        printf("0. Para adicionar um colaborador\n");
        printf("1. Alterar salario de colaborador\n");
        printf("2. Remover colaborador\n");
        printf("3. Pesquisar colaborador por nome e por codigo\n");
        printf("4. Imprimir soma de todos os salarios\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao:\n");
        scanf("%d", &escolha);
        int aux;
        float tsalario = 0;
        char nome[20];
        switch (escolha){
            case 0:
                {
                    preencher(cadastro);
                    arquivo(cadastro);
                    break;
                }
            case 1:
                {
                    printf("\nDigite o codigo do colaborador que deseja alterar o salario:\n");
                    scanf("%d", &aux);
                    for(int i = 0; i < 5; i++){
                        if(aux == cadastro[i].codigo){
                        printf("DIGITE A ALTERACAO");
                        scanf("%f", &cadastro[i].salario);
                        arquivo(cadastro);
                        break;
                        }
                    }

                }
                break;
            case 2:
                {
                    printf("\nDigite o codigo do colaborador que deseja exluir:\n");
                    scanf("%d", &aux);
                    excluir(cadastro, aux);
                    arquivo(cadastro);
                }
                break;
            case 3:
                {
                    printf("\nDigite o codigo do colaborador que deseja pesquisar:");
                    scanf("%d", &aux);
                    printf("\nDigite o nome do colaborador que deseja pesquisar:");
                    scanf("%s", nome);
                        for (int i = 0; i < 5; i++) {
                            if (aux == cadastro[i].codigo && strcmp(nome, cadastro[i].nome) == 0) {
                                printf("\nCodigo: %d\n", cadastro[i].codigo);
                                printf("Nome: %s\n", cadastro[i].nome);
                                printf("Email: %s\n", cadastro[i].email);
                                printf("Salario: %.2f\n", cadastro[i].salario);
                                break;
                            }
                        }
                }
                break;

            case 4:
                {
                    float resultado = salarios(cadastro,tsalario);
                    printf("\nO valor de todos os salarios somados e: RS%.2f\n", resultado);
                }
                break;
            case 5:
                {
                    return 0;
                }
            default:
                {
                   printf("\nOpção invalida.\n");
                }
            }
    }
}


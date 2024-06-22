#include <stdio.h>

// Fun��o recursiva para converter decimal para bin�rio
void decimalParaBinario(int decimal) {
    if (decimal > 1) {
        // Chama a fun��o recursivamente com a parte inteira da divis�o por 2
        decimalParaBinario(decimal / 2);
    }
    // Imprime o resto da divis�o por 2 (que ser� 0 ou 1)
    printf("%d", decimal % 2);
}

int main() {
    int numeroDecimal;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &numeroDecimal);

    printf("O n�mero %d em bin�rio �: ", numeroDecimal);
    if (numeroDecimal == 0) {
        printf("0");
    } else {
        decimalParaBinario(numeroDecimal);
    }
    printf("\n");

    return 0;
}

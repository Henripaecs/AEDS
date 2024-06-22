#include <stdio.h>

// Função recursiva para converter decimal para binário
void decimalParaBinario(int decimal) {
    if (decimal > 1) {
        // Chama a função recursivamente com a parte inteira da divisão por 2
        decimalParaBinario(decimal / 2);
    }
    // Imprime o resto da divisão por 2 (que será 0 ou 1)
    printf("%d", decimal % 2);
}

int main() {
    int numeroDecimal;

    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);

    printf("O número %d em binário é: ", numeroDecimal);
    if (numeroDecimal == 0) {
        printf("0");
    } else {
        decimalParaBinario(numeroDecimal);
    }
    printf("\n");

    return 0;
}

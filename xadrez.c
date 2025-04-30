#include <stdio.h>

int main() {

    // Movimentação da Torre usando 'for'
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita: %d casa(s)\n", i);
    }

    // Movimentação do Bispo usando 'while'
    printf("\nMovimentação do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita: %d casa(s)\n", j);
        j++;
    }

    // Movimentação da Rainha usando 'do-while'
    printf("\nMovimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda: %d casa(s)\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
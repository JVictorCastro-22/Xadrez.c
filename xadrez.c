#include <stdio.h>

int main() {

    // Movimentação da Torre usando 'for'
    printf("\nMovimentação da Torre:\n");
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

    // Movimentação do Cavalo usando loops aninhados
    printf("\nMovimentação do Cavalo:\n");
    int movimentocavalo = 1; // Definir um número maior se quiser mais movimentos
    
    int passo = 1; // Criando um contador para o número de movimentos
    while (movimentocavalo--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima: %d casa(s)\n", passo++);
        }
        printf("Direita: %d casa(s)\n", passo++);
    }

    return 0;
}

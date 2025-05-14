#include <stdio.h>

// Função recursiva para movimentação da Torre (movendo para a direita)
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Direita: %d casa(s)\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para movimentação do Bispo (Diagonal: Cima e Direita)
void moverBispo(int casas, int atualVertical, int atualHorizontal) {
    if (atualVertical > casas) return; // Caso base
    printf("Cima, Direita: %d casa(s)\n", atualVertical);
    moverBispo(casas, atualVertical + 1, atualHorizontal + 1); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha (movendo para a esquerda)
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Esquerda: %d casa(s)\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

// Movimentação do Cavalo com Loops Aninhados (movendo em "L")
void moverCavalo(int movimentos) {
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        int direcao = i % 2 == 0 ? 1 : -1; // Alternar direção do movimento
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");

        if (direcao == -1) {
            printf("Esquerda\n"); // Movendo em "L" para equilibrar
        }
    }
}

int main() {
    // Definição da altura e número de movimentos das peças
    int alturaTorre = 5;
    int alturaBispo = 5;
    int alturaRainha = 8;
    int movimentosCavalo = 3;

    // Movimentação das peças utilizando funções recursivas
    printf("\nMovimentação da Torre:\n");
    moverTorre(alturaTorre, 1);

    printf("\nMovimentação do Bispo:\n");
    moverBispo(alturaBispo, 1, 1);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(alturaRainha, 1);

    // Movimentação do Cavalo com loops complexos
    moverCavalo(movimentosCavalo);

    return 0;
}
#include <stdio.h>

// ===== Função recursiva: TORRE (Direita) =====
void moverTorreDireita(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;
    printf("Direita (%d)\n", passo);
    moverTorreDireita(casasRestantes - 1, passo + 1);
}

// ===== Função recursiva com loops aninhados: BISPO (Diagonal cima-direita) =====
void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    
    // Loop externo: movimento vertical
    for (int i = 1; i <= vertical; i++) {
        // Loop interno: movimento horizontal
        for (int j = 1; j <= horizontal; j++) {
            if (i == j) {  // Só imprime se estiver na mesma "diagonal"
                printf("Cima Direita (Passo %d)\n", i);
            }
        }
    }
}

// ===== Função recursiva: RAINHA (Esquerda) =====
void moverRainhaEsquerda(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;
    printf("Esquerda (%d)\n", passo);
    moverRainhaEsquerda(casasRestantes - 1, passo + 1);
}

// ===== Movimento complexo com loops aninhados: CAVALO (2 cima + 1 direita) =====
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;
    int passo = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo para cima
    for (int i = 1; i <= movimentosCima; i++) {
        printf("Cima (%d)\n", passo++);
        
        // Se chegou ao fim do movimento vertical, entra no horizontal
        if (i == movimentosCima) {
            int j = 1;
            while (j <= movimentosDireita) {
                if (j == 1) {
                    printf("Direita (%d)\n", passo++);
                    break;  // Movimento finalizado
                }
                j++;
            }
        }
    }
}

// ===== MAIN =====
int main() {
    // ===== TORRE =====
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorreDireita(casasTorre, 1);
    printf("\n");

    // ===== BISPO =====
    int casasDiagonal = 5;
    printf("Movimento do Bispo:\n");
    moverBispoDiagonal(casasDiagonal, casasDiagonal);
    printf("\n");

    // ===== RAINHA =====
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(casasRainha, 1);
    printf("\n");

    // ===== CAVALO =====
    moverCavalo();
    printf("\n");

    return 0;
}

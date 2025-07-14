#include <stdio.h>

int main() {
    // ===== TORRE =====
    // A torre se move em linha reta - simular 5 casas para a direita usando FOR

    int i;
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // ===== BISPO =====
    // O bispo se move na diagonal - simular 5 casas para cima e à direita usando WHILE

    int casasBispo = 5;
    int j = 1;

    printf("Movimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // ===== RAINHA =====
    // A rainha se move em todas as direções - simular 8 casas para a esquerda usando DO-WHILE

    int casasRainha = 8;
    int k = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\n");

    return 0;
}

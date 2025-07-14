#include <stdio.h>

int main() {
    // ===== TORRE =====
    int i;
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // ===== BISPO =====
    int j = 1;
    int casasBispo = 5;

    printf("Movimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // ===== RAINHA =====
    int k = 1;
    int casasRainha = 8;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // ===== CAVALO =====
    // Movimento em L: 2 casas para baixo, 1 para esquerda
    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo: FOR para "Baixo"
    for (int a = 1; a <= passosBaixo; a++) {
        printf("Baixo (%d)\n", a);
        
        // Loop interno: WHILE (executa só na última iteração para simular o "L")
        if (a == passosBaixo) {
            int b = 1;
            while (b <= passosEsquerda) {
                printf("Esquerda (%d)\n", b);
                b++;
            }
        }
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    // Torre : 5 casas para a direita
    int movimentoTorre = 5;
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Bispo : 5 casas na diagonal para cima e à direita
    int movimentoBispo = 5;
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while (j < movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Rainha: 8 casas para a esquerda
    int movimentoRainha = 8;
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentoRainha);

    return 0;
}

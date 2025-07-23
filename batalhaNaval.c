#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    //horizontal
    tabuleiro[6][1] = 3;
    tabuleiro[6][2] = 3;
    tabuleiro[6][3] = 3;

    //vertical
    tabuleiro[2][8] = 3;
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;
    
    //diagonal
    tabuleiro[4][5] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[6][7] = 3;
    
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}  
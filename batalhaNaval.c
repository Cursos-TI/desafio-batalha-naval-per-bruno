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

    //matriz da habilidade
    //tabuleiro 1
    int tabuleiro1[5][5];

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            tabuleiro1[linha][coluna] = 0;
        }
    }

    tabuleiro1[1][2] = 5;
    tabuleiro1[2][1] = 5;
    tabuleiro1[2][2] = 5;
    tabuleiro1[2][3] = 5;
    tabuleiro1[3][0] = 5;
    tabuleiro1[3][1] = 5;
    tabuleiro1[3][2] = 5;
    tabuleiro1[3][3] = 5;
    tabuleiro1[3][4] = 5;

    //tabuleiro 2
    int tabuleiro2[5][5];

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            tabuleiro2[linha][coluna] = 0;
        }
    }

    tabuleiro2[0][2] = 5;
    tabuleiro2[1][2] = 5;
    tabuleiro2[2][0] = 5;
    tabuleiro2[2][1] = 5;
    tabuleiro2[2][2] = 5;
    tabuleiro2[2][3] = 5;
    tabuleiro2[2][4] = 5;
    tabuleiro2[3][2] = 5;
    tabuleiro2[4][2] = 5;

    //tabuleiro 3
    int tabuleiro3[5][5];

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            tabuleiro3[linha][coluna] = 0;
        }
    }

    tabuleiro3[1][2] = 3;
    tabuleiro3[2][1] = 3;
    tabuleiro3[2][2] = 3;
    tabuleiro3[2][3] = 3;
    tabuleiro3[3][2] = 3;

    //print
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d ", tabuleiro1[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d ", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d ", tabuleiro3[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}  
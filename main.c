#include <stdio.h>

int main() {

    // Nível Novato - Posicionamento dos Navios

    /*
    // Declara e inicializa 'tabuleiro' como uma matriz 5x5.
    // Células com 0 = água.
    int tabuleiro_novato[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Coordenadas para Navio 1 (vertical, 2 partes)
    int navio1_x1 = 0; int navio1_y1 = 2;
    int navio1_x2 = 1; int navio1_y2 = 2;

    // Coordenadas para Navio 2 (horizontal, 2 partes)
    int navio2_x1 = 3; int navio2_y1 = 0;
    int navio2_x2 = 3; int navio2_y2 = 1;

    // Atribui '1' (navio) às células da matriz para o Navio 1.
    tabuleiro_novato[navio1_x1][navio1_y1] = 1;
    tabuleiro_novato[navio1_x2][navio1_y2] = 1;

    // Atribui '1' (navio) às células da matriz para o Navio 2.
    tabuleiro_novato[navio2_x1][navio2_y1] = 1;
    tabuleiro_novato[navio2_x2][navio2_y2] = 1;

    printf("--- Nivel Novato: Posicionamento dos Navios ---\n\n");

    printf("Coordenadas do Navio 1 (Vertical):\n");
    printf("Parte 1: (%d, %d)\n", navio1_x1, navio1_y1);
    printf("Parte 2: (%d, %d)\n", navio1_x2, navio1_y2);
    printf("\n");

    printf("Coordenadas do Navio 2 (Horizontal):\n");
    printf("Parte 1: (%d, %d)\n", navio2_x1, navio2_y1);
    printf("Parte 2: (%d, %d)\n", navio2_x2, navio2_y2);
    printf("\n");

    // Imprime a matriz 'tabuleiro_novato'.
    printf("Estado atual do Tabuleiro (0 = agua, 1 = navio):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_novato[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */
    
    // --------------------------------------------------------------------------------

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
   
    /*
    // Declara e inicializa o tabuleiro 10x10, com todas as posições em 0 (água).
    int tabuleiro_aventureiro[10][10] = {0};

    // Coordenadas para Navio 1 (vertical, 2 partes)
    tabuleiro_aventureiro[0][2] = 3;
    tabuleiro_aventureiro[1][2] = 3;

    // Coordenadas para Navio 2 (horizontal, 3 partes)
    tabuleiro_aventureiro[3][0] = 3;
    tabuleiro_aventureiro[3][1] = 3;
    tabuleiro_aventureiro[3][2] = 3;

    // Coordenadas para Navio 3 (diagonal, 2 partes)
    tabuleiro_aventureiro[5][5] = 3;
    tabuleiro_aventureiro[6][6] = 3;

    // Coordenadas para Navio 4 (diagonal, 3 partes)
    tabuleiro_aventureiro[8][1] = 3;
    tabuleiro_aventureiro[7][2] = 3;
    tabuleiro_aventureiro[6][3] = 3;

    printf("--- Nivel Aventureiro: Tabuleiro 10x10 e Navios Diagonais ---\n\n");

    // Imprime a matriz 'tabuleiro_aventureiro' com 0 (água) e 3 (navio).
    printf("Estado atual do Tabuleiro (0 = agua, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro_aventureiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */

   // --------------------------------------------------------------------------------
    
    // Nível Mestre - Habilidades Especiais com Matrizes

    /*
    // Declara e inicializa as matrizes para as habilidades especiais.
    // 0 = área não afetada, 1 = área afetada.
    printf("--- Nivel Mestre: Habilidades Especiais ---\n\n");

    // Habilidade 1: Cone
    printf("Habilidade: Cone\n");
    int habilidade_cone[5][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            habilidade_cone[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade_cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Habilidade 2: Cruz
    printf("Habilidade: Cruz\n");
    int habilidade_cruz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        habilidade_cruz[2][i] = 1; // Linha horizontal
    }
    for (int i = 0; i < 5; i++) {
        habilidade_cruz[i][2] = 1; // Linha vertical
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade_cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Habilidade 3: Octaedro
    printf("Habilidade: Octaedro\n");
    int habilidade_octaedro[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i + j == 2 || i + j == 6 || i - j == -2 || i - j == 2) {
                habilidade_octaedro[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade_octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */

    return 0;
}
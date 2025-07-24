#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros//
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3; // Coloca um navio na diagonal//
        tabuleiro[i + 5][1] = 3; // Coloca um navio na vertical//
        tabuleiro[i + 7][i + 6] = 3; // Coloca um navio na diagonal//
        tabuleiro[2][i + 6] = 3; // coloca um navio na horizontal//
    }

   for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o tabuleiro//
        }
    }

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
                     
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    printf("\n\nArea de Efeito das abilidades:\n");
    printf("\nOctaedro:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]); // Imprime a area de efeito do octaedro//
        }
    }
    printf("\n\nCruz:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]); // Imprime a area de efeito da cruz//
        }
    }
    printf("\n\nCone:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]); // Imprime a area de efeito do cone//
        }
    }
    
    return 0;
}
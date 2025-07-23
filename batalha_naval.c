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
    
    return 0;
}
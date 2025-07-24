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
    printf("\n1. Octaedro:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]); // Imprime a area de efeito do octaedro//
        }
    }
    printf("\n\n2. Cruz:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]); // Imprime a area de efeito da cruz//
        }
    }
    printf("\n\n3. Cone:");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]); // Imprime a area de efeito do cone//
        }
    }
    
    int choice;
    printf("\n\nEscolha uma habilidade : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    tabuleiro[i + 2][j + 2] += octaedro[i][j]; // Aplica a habilidade octaedro no tabuleiro//
                }
            }
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (tabuleiro[i][j] == 1 || tabuleiro[i][j] == 4) {
                        tabuleiro[i][j] = 5; // Marca os acertos com 5//
                    }
                }
            }
            for (int i = 0; i < 10; i++) {
                printf("\n");
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]); // Imprime o tabuleiro atualizado//
                }
            }
            break;
        case 2:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    tabuleiro[i + 2][j + 2] += cruz[i][j]; // Aplica a habilidade cruz no tabuleiro//
                }
            }
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (tabuleiro[i][j] == 1 || tabuleiro[i][j] == 4) {
                        tabuleiro[i][j] = 5; // Marca os acertos com 5//
                    }
                }
            }
            for (int i = 0; i < 10; i++) {
                printf("\n");
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]); // Imprime o tabuleiro atualizado//
                }
            }
            break;
        case 3:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    tabuleiro[i][j + 2] += cone[i][j]; // Aplica a habilidade cone no tabuleiro//
                }
            }
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (tabuleiro[i][j] == 1 || tabuleiro[i][j] == 4) {
                        tabuleiro[i][j] = 5; // Marca os acertos com 5//
                    }
                }
            }
            for (int i = 0; i < 10; i++) {
                printf("\n");
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]); // Imprime o tabuleiro atualizado//
                }
            }
            break;
    }
    return 0;
}
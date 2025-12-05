#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10];
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            tabuleiro[x][y] = 0; // Inicializa todas as posições com 0 (vazio)
        }
    }


    int navio1[3][2] = {{1,3},{2,3},{3,3}};
    int navio2[3][2] = {{2,5},{2,6},{2,7}};

    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            for (int n = 0; n < 3; n++) {
                if (navio1[n][0] == x && navio1[n][1] == y) {
                    tabuleiro[x][y] = 1;  //1 significa navio1
                }
            }
            for (int n = 0; n < 3; n++) {
                if (navio2[n][0] == x && navio2[n][1] == y) {
                    tabuleiro[x][y] = 2;  //2 significa navio2
                }
            }

            switch(tabuleiro[x][y]) {
                case 0: printf("A "); break;
                case 1: printf("1 "); break;
                case 2: printf("2 "); break;
                default: printf("? "); break;
            }
        }
        printf("\n");
    }

    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

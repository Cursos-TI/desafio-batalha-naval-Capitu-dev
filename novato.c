#include <stdio.h>

int main() {
// 1️⃣ Criar o tabuleiro 10x10
    int tabuleiro[10][10];  // matriz 10x10 (linhas x colunas)

    // Inicializa todas as posições com 0 (representando água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2️⃣ Definir os navios
    // -------------------------------
    int navio_horizontal[3] = {3, 3, 3}; // navio de tamanho 3
    int navio_vertical[3]   = {3, 3, 3}; // outro navio de tamanho 3

    // 3️⃣ Coordenadas iniciais dos navios
    // -------------------------------
    // Lembrando: linhas e colunas começam no índice 0
    int linha_horizontal = 2; // começa na linha 2
    int coluna_horizontal = 4; // começa na coluna 4

    int linha_vertical = 5; // começa na linha 5
    int coluna_vertical = 7; // começa na coluna 7

    // 4️⃣ Posicionar o navio horizontal
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        // Cada parte do navio vai ocupar uma coluna
        // Exemplo: tabuleiro[2][4], [2][5], [2][6]
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
    }

    // -------------------------------
    // 5️⃣ Posicionar o navio vertical
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        // Cada parte do navio vai ocupar uma linha
        // Exemplo: tabuleiro[5][7], [6][7], [7][7]
        tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    // -------------------------------
    // 6️⃣ Exibir o tabuleiro
    // -------------------------------
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");

    for (int i = 0; i < 10; i++) {          // percorre as linhas
        for (int j = 0; j < 10; j++) {      // percorre as colunas
            printf("%d ", tabuleiro[i][j]); // imprime cada posição
        }
        printf("\n"); // quebra de linha no fim de cada linha
    }

    return 0;
}
#include <stdio.h>

#define TAMANHO 10

void trocarLinhas(int matriz[TAMANHO][TAMANHO], int linha1, int linha2) {
    int temp[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        temp[i] = matriz[linha1][i];
        matriz[linha1][i] = matriz[linha2][i];
        matriz[linha2][i] = temp[i];
    }
}

void trocarColunas(int matriz[TAMANHO][TAMANHO], int coluna1, int coluna2) {
    int temp[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        temp[i] = matriz[i][coluna1];
        matriz[i][coluna1] = matriz[i][coluna2];
        matriz[i][coluna2] = temp[i];
    }
}

void trocarDiagonais(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][TAMANHO - 1 - i];
        matriz[i][TAMANHO - 1 - i] = temp;
    }
}

void trocarLinhaComColuna(int matriz[TAMANHO][TAMANHO], int linha, int coluna) {
    int temp[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        temp[i] = matriz[i][coluna];
        matriz[i][coluna] = matriz[linha][i];
        matriz[linha][i] = temp[i];
    }
}

void imprimirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO];

    // Preencha a matriz com valores (exemplo)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = i * TAMANHO + j + 1;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    trocarLinhas(matriz, 1, 7);
    trocarColunas(matriz, 3, 9);
    trocarDiagonais(matriz);
    trocarLinhaComColuna(matriz, 4, 9);

    printf("\nMatriz alterada:\n");
    imprimirMatriz(matriz);

    return 0;
}

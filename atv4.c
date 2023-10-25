#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

// Função para somar as colunas e armazenar na 61ª linha
void somarColunas(int matriz[LINHAS][COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        int soma = 0;
        for (int i = 0; i < LINHAS - 1; i++) {
            soma += matriz[i][j];
        }
        matriz[LINHAS - 1][j] = soma;
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencha a matriz com valores (exemplo)
    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Chama a função para somar as colunas e armazenar na 61ª linha
    somarColunas(matriz);

    // Imprime a matriz
    imprimirMatriz(matriz);

    return 0;
}

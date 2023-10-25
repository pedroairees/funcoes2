#include <stdio.h>

void calcularLocacoesGratuitas(const int A[], int locacoesGratis[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoesGratis[i] = A[i] / 15;
    }
}

int main() {
    const int tamanho = 500;
    int filmesRetirados[tamanho];
    int locacoesGratis[tamanho];


    for (int i = 0; i < tamanho; i++) {
        filmesRetirados[i] = 25; // Número de filmes retirados por cada cliente
    }

    calcularLocacoesGratuitas(filmesRetirados, locacoesGratis, tamanho);


    // Exemplo de impressão dos resultados:
    printf("Clientes e suas locações gratuitas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Cliente %d: %d locações gratuitas\n", i + 1, locacoesGratis[i]);
    }

    return 0;
}

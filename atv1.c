#include <stdio.h>

float calcularDesconto(float total, int opcaoPagamento) {
    switch (opcaoPagamento) {
        case 1:
            return total * 0.9; // 10% de desconto
        case 2:
        case 3:
            return total; // Sem desconto
        default:
            return -1; // Opção de pagamento inválida
    }
}

void imprimirParcelas(int opcaoPagamento, float total) {
    if (opcaoPagamento == 2) {
        printf("O valor das 2 parcelas é de R$ %.2f\n", total / 2);
    } else if (opcaoPagamento == 3) {
        printf("O valor das 3 parcelas é de R$ %.2f\n", total / 3);
    }
}

int main() {
    float totalGasto;
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    int opcaoPagamento;
    printf("Escolha a opção de pagamento:\n");
    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - 2 vezes (5%% de desconto)\n");
    printf("3 - 3 vezes (sem desconto)\n");
    scanf("%d", &opcaoPagamento);

    float valorFinal = calcularDesconto(totalGasto, opcaoPagamento);

    if (valorFinal == -1) {
        printf("Opção de pagamento inválida.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("O valor total a ser pago é de R$ %.2f\n", valorFinal);

    imprimirParcelas(opcaoPagamento, valorFinal);

    return 0;
}

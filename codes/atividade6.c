#include <stdio.h>
#include <locale.h>

#define PRECO_SIMPLICE 150.00
#define PRECO_DUPLO 250.00
#define PRECO_SUITE 400.00

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int tipoQuarto, numDiarias;
    float valorTotal = 0;

    printf("=== Menu de Hospedagem ===\n");
    printf("1. Quarto Simples - R$ %.2f por diária\n", PRECO_SIMPLICE);
    printf("2. Quarto Duplo - R$ %.2f por diária\n", PRECO_DUPLO);
    printf("3. Suíte - R$ %.2f por diária\n\n", PRECO_SUITE);

    printf("Escolha o tipo de quarto (1-3): ");
    if (scanf("%d", &tipoQuarto) != 1 || tipoQuarto < 1 || tipoQuarto > 3) {
        printf("[ERRO] Opção inválida! Escolha uma opção de 1 a 3.\n\n");
        return 1;
    }

    printf("Informe o número de diárias: ");
    if (scanf("%d", &numDiarias) != 1 || numDiarias <= 0) {
        printf("\n[ERRO] Número de diárias inválido! Deve ser maior que zero.\n\n");
        return 1;
    }

    switch(tipoQuarto) {
        case 1:
            valorTotal = PRECO_SIMPLICE * numDiarias;
            break;
        case 2:
            valorTotal = PRECO_DUPLO * numDiarias;
            break;
        case 3:
            valorTotal = PRECO_SUITE * numDiarias;
            break;
    }

    printf("\n[INFO] Valor total da hospedagem para %d diárias: R$ %.2f\n\n", numDiarias, valorTotal);

    return 0;
}

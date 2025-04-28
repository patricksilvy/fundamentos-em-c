#include <stdio.h>
#include <locale.h>

#define LIMITE_PEIXES 40.0
#define VALOR_MULTA_POR_QUILO 4.0

void calcularMulta(float pesoPeixes) {
    if (pesoPeixes <= 0) {
        printf("\n[ERRO] Valor inválido! A quantidade de peixe deve ser maior que zero.\n");
        return;
    }

    if (pesoPeixes > LIMITE_PEIXES) {
        float excesso = pesoPeixes - LIMITE_PEIXES;
        float multa = excesso * VALOR_MULTA_POR_QUILO;
        
        printf("\n[ALERTA] Você excedeu o limite em %.2f kg.\n", excesso);
        printf("[MULTA] Valor da multa: R$ %.2f\n", multa);
        printf("[INFO] Pesca excedente detectada.\n");
    } else {
        printf("\n[OK] Você pescou %.2f kg, dentro do limite permitido de %.2f kg.\n", pesoPeixes, LIMITE_PEIXES);
        printf("[INFO] Não há multa a ser paga.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float pesoPeixes;

    printf("=== Cálculo de Multa por Excesso de Peixe ===\n");
    printf("Informe a quantidade de peixe (em kg): ");

    if (scanf("%f", &pesoPeixes) != 1) {
        printf("\n[ERRO] Entrada inválida! Por favor, insira um número.\n");
        return 1;
    }

    calcularMulta(pesoPeixes);

    return 0;
}

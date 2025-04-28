#include <stdio.h>
#include <locale.h>
#include <math.h>

#define COBERTURA_POR_LITRO 3.0
#define CAPACIDADE_LATA 18.0
#define PRECO_LATA 80.0

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    float areaParede;
    int quantidadeLatas;
    float valorTotal;

    printf("=== Cálculo de Tinta para Pintura de Parede ===\n");
    printf("Informe o tamanho da parede em metros quadrados: ");
    
    if (scanf("%f", &areaParede) != 1 || areaParede <= 0) {
        printf("\n[ERRO] Valor inválido! Informe um número positivo.\n");
        return 1;
    }

    quantidadeLatas = ceil(areaParede / (COBERTURA_POR_LITRO * CAPACIDADE_LATA));

    valorTotal = quantidadeLatas * PRECO_LATA;

    printf("\nQuantidade de latas necessárias: %d\n", quantidadeLatas);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}

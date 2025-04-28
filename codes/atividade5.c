#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float velocidadeVeiculo, velocidadeMaxima;
    float porcentagemExcesso;
    float multa;

    printf("Digite a velocidade do veículo (km/h): ");
    scanf("%f", &velocidadeVeiculo);

    printf("Digite a velocidade máxima permitida (km/h): ");
    scanf("%f", &velocidadeMaxima);

    if (velocidadeVeiculo <= velocidadeMaxima) {
        printf("\n[INFO] O veículo está dentro do limite de velocidade. Nenhuma multa.\n\n");
    } else {
        porcentagemExcesso = (velocidadeVeiculo - velocidadeMaxima) / velocidadeMaxima * 100;

        if (porcentagemExcesso <= 10) {
            multa = 50.00;
        } else if (porcentagemExcesso <= 20) {
            multa = 100.00;
        } else {
            multa = 200.00;
        }

        printf("\n[INFO] O veículo ultrapassou o limite de velocidade em %.2f%%.\n", porcentagemExcesso);
        printf("[MULTA] A multa é de R$ %.2f.\n\n", multa);
    }

    return 0;
}

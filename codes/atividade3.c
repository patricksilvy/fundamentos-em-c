#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void exibirMenu() {
    printf("\n=== Menu de Atendimento Bancário ===\n");
    printf("1. Consultar saldo\n");
    printf("2. Realizar saque\n");
    printf("3. Realizar depósito\n");
    printf("4. Realizar transferência\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

float realizarSaque(float saldo) {
    float valor;
    char buffer[100];
    
    printf("\nDigite o valor do saque: R$ ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%f", &valor) != 1 || valor <= 0) {
            printf("\n[ERRO] Valor inválido para saque.\n");
            return saldo;
        }

        if (valor > saldo) {
            printf("[ALERTA] Saldo insuficiente para o saque.\n");
        } else {
            saldo -= valor;
            printf("[OK] Saque realizado com sucesso!\n");
            printf("[INFO] Saldo atualizado: R$ %.2f\n", saldo);
        }
    }
    return saldo;
}

float realizarDeposito(float saldo) {
    float valor;
    char buffer[100];
    
    printf("\nDigite o valor do depósito: R$ ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%f", &valor) != 1 || valor <= 0) {
            printf("\n[ERRO] Valor inválido para depósito.\n");
            return saldo;
        }

        saldo += valor;
        printf("[OK] Depósito realizado com sucesso!\n");
        printf("[INFO] Saldo atualizado: R$ %.2f\n", saldo);
    }
    return saldo;
}

float realizarTransferencia(float saldo) {
    int contaDestino;
    float valor;
    char buffer[100];

    printf("\nDigite o número da conta de destino: ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%d", &contaDestino) != 1) {
            printf("\n[ERRO] Número de conta inválido.\n");
            return saldo;
        }
    }

    printf("Digite o valor da transferência: R$ ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%f", &valor) != 1 || valor <= 0) {
            printf("\n[ERRO] Valor inválido para transferência.\n");
            return saldo;
        }

        if (valor > saldo) {
            printf("[ERRO] Saldo insuficiente para a transferência.\n");
        } else {
            saldo -= valor;
            printf("\n[OK] Transferência de R$ %.2f realizada com sucesso para a conta %d!\n", valor, contaDestino);
            printf("[INFO] Saldo atualizado: R$ %.2f\n", saldo);
        }
    }

    return saldo;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    float saldo = 1000.0;
    int opcao;
    char buffer[100];

    do {
        exibirMenu();
        
        if (fgets(buffer, sizeof(buffer), stdin)) {
            if (sscanf(buffer, "%d", &opcao) != 1) {
                printf("\n[ERRO] Opção inválida. Por favor, insira um número.\n");
                continue;
            }

            switch(opcao) {
                case 1:
                    printf("\n[INFO] Saldo atual: R$ %.2f\n", saldo);
                    break;

                case 2:
                    saldo = realizarSaque(saldo);
                    break;

                case 3:
                    saldo = realizarDeposito(saldo);
                    break;

                case 4:
                    saldo = realizarTransferencia(saldo);
                    break;

                case 5:
                    printf("\n[OK] Encerrando o atendimento. Obrigado!\n");
                    break;

                default:
                    printf("\n[ERRO] Opção inválida! Tente novamente.\n");
                    break;
            }
        }
    } while (opcao != 5);

    return 0;
}

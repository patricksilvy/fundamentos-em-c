#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

    do {  
        printf("\nEscolha a atividade que deseja executar:\n");
        printf("1. Atividade 1\n");
        printf("2. Atividade 2\n");
        printf("3. Atividade 3\n");
        printf("4. Atividade 4\n");
        printf("5. Atividade 5\n");
        printf("6. Atividade 6\n");
        printf("7. Sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Executando Atividade 1...\n\n");
                system("cd output && atividade1.exe"); 
                break;

            case 2:
                printf("Executando Atividade 2...\n\n");
                system("cd output && atividade2.exe"); 
                break;

            case 3:
                printf("Executando Atividade 3...\n\n");
                system("cd output && atividade3.exe"); 
                break;

            case 4:
                printf("Executando Atividade 4...\n\n");
                system("cd output && atividade4.exe"); 
                break;

            case 5:
                printf("Executando Atividade 5...\n\n");
                system("cd output && atividade5.exe"); 
                break;

            case 6:
                printf("Executando Atividade 6...\n\n");
                system("cd output && atividade6.exe"); 
                break;

            case 7:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 7);  

    return 0;
}

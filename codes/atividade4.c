#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero, divisor;
    int primo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0;
    } else if (numero == 2) {
        primo = 1;
    } else if (numero % 2 == 0) {
        primo = 0;
    } else {
        int limite = (int) sqrt(numero);
        for (divisor = 3; divisor <= limite; divisor += 2) {
            if (numero % divisor == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}

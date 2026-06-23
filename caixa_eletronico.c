#include <stdio.h>

int main() {

    float saldo = 1000.00;
    float valor;
    int opcao;

    printf("1 - Saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Saque\n");

    scanf("%d", &opcao);

    if(opcao == 1) {

        printf("Saldo: %.2f\n", saldo);

    } else if(opcao == 2) {

        printf("Valor: ");
        scanf("%f", &valor);

        saldo += valor;

        printf("Novo saldo: %.2f\n", saldo);

    } else if(opcao == 3) {

        printf("Valor: ");
        scanf("%f", &valor);

        saldo -= valor;

        printf("Novo saldo: %.2f\n", saldo);
    }

    return 0;
}

#include <stdio.h>

int main() {

    float saldo = 1000.00;
    int opcao;

    printf("1 - Verificar saldo\n");
    printf("7 - Sair\n");

    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Saldo: %.2f\n", saldo);
    }

    return 0;
}

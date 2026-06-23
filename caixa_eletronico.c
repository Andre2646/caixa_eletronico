#include <stdio.h>

int main() {

    float saldo = 1000.00;
    float emprestimo = 0.00;
    float valor;
    int opcao;

    do {

        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1 - Verificar saldo\n");
        printf("2 - Depositar valor\n");
        printf("3 - Sacar valor\n");
        printf("4 - Pedir emprestimo\n");
        printf("5 - Pagar emprestimo\n");
        printf("6 - Consultar emprestimo\n");
        printf("7 - Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Saldo: %.2f\n", saldo);
                break;

            case 2:
                printf("Valor deposito: ");
                scanf("%f", &valor);

                if(valor > 0) {
                    saldo += valor;
                }
                break;

            case 3:
                printf("Valor saque: ");
                scanf("%f", &valor);

                if(valor > 0 && valor <= saldo) {
                    saldo -= valor;
                }
                break;

            case 4:
                printf("Valor emprestimo: ");
                scanf("%f", &valor);

                if(valor > 0) {
                    emprestimo += valor;
                    saldo += valor;
                }
                break;

            case 5:
                printf("Valor pagamento: ");
                scanf("%f", &valor);

                if(valor > 0 &&
                   valor <= saldo &&
                   emprestimo > 0) {

                    if(valor > emprestimo) {
                        valor = emprestimo;
                    }

                    saldo -= valor;
                    emprestimo -= valor;
                }
                break;

            case 6:
                printf("Emprestimo: %.2f\n", emprestimo);
                break;

            case 7:
                printf("Sistema encerrado.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(opcao != 7);

    return 0;
}

#include <stdio.h>

int main() {
    int valor;
    int notas[] = {200, 100, 50, 20, 10, 5};
    int qtd[6] = {0};
    int reserva = 0;

    scanf("%d", &valor);

    for (int i = 0; i < 6; i++) {
        reserva += notas[i];
    }

    if (valor < 5 || valor < reserva) {
        printf("Valor invalido ou saque impossivel\n");
        return 0;
    }

    valor -= reserva;

    for (int i = 0; i < 6; i++) {
        qtd[i] = valor / notas[i];
        valor %= notas[i];
    }

    if (valor != 0) {
        printf("Nao foi possivel realizar o saque sem violar a regra\n");
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d x R$%d\n", qtd[i] + 1, notas[i]);
    }

    int total = 0;
    for (int i = 0; i < 6; i++) total += qtd[i] + 1;
    printf("Total de cedulas: %d\n", total);

    return 0;
}


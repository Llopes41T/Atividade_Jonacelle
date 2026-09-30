#include <stdio.h>

int main() {
    int passos_hora, total_passos = 0, horas = 0;

    printf("ACOMPANHAMENTO DE PASSOS\n");
    printf("A meta diaria e de 10.000 passos.\n\n");

    // O loop continua enquanto o total de passos for menor que 10.000
    while (total_passos < 10000) {
        horas++;
        printf("Digite a quantidade de passos dados na hora %d: ", horas);
        scanf("%d", &passos_hora);

        // Validação básica para evitar números negativos
        if (passos_hora < 0) {
            printf("Valor invalido! Digite um numero positivo de passos.\n");
            horas--; // 
            continue;
        }

        total_passos += passos_hora;
    }

    printf("Meta atingida\n");
    printf("Foram necessarias **%d horas** para atingir ou ultrapassar os 10.000 passos.\n", horas);
    printf("Total acumulado: %d passos.\n", total_passos);

    return 0;
}

#include <stdio.h>

int main() {
    int i;
    float nota, soma = 0, media;


    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            i--; // Repete a leitura para o mesmo cliente ate completar os 10 clinetes
            continue;
        }

        soma += nota;
    }

    // Calculando a media
    media = soma / 10;

    printf("\nRESULTADO\n");
    printf("Media geral de atendimento: %.2f\n", media);

    if (media < 7.0) {
        printf("[ALERTA] A media geral esta abaixo de 7.0!\n");
    }

    return 0;
}

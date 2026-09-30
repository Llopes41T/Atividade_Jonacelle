#include <stdio.h>

int main() {
    int opcao, num;
    do {
        printf("===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                scanf("%d", &num);
                if (num % 2 == 0) printf("Par ");
                else printf("Impar ");
                if (num > 0) printf("e positivo\n");
                else if (num < 0) printf("e negativo\n");
                else printf("e zero\n");
                break;
            case 2:
                scanf("%d", &num);
                if (num > 0) printf("Positivo\n");
                else if (num < 0) printf("Negativo\n");
                else printf("Zero\n");
                break;
            case 3:
                scanf("%d", &num);
                printf("Quadrado: %d\n", num * num);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(opcao != 4);
    return 0;
}


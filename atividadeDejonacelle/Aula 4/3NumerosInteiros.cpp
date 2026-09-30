#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    int inter;
    if ((a != maior && a != menor) || (a == b && a != c) || (a == c && a != b)) inter = a;
    else if ((b != maior && b != menor) || (b == a && b != c) || (b == c && b != a)) inter = b;
    else inter = c;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Intermediario: %d\n", inter);

    if (a == b && b == c) {
        printf("Tres iguais\n");
    } else if (a == b || a == c || b == c) {
        printf("Valores repetidos\n");
    } else {
        printf("Todos diferentes\n");
    }

    if (a < b && b < c) {
        printf("Ordem crescente\n");
    } else if (a > b && b > c) {
        printf("Ordem decrescente\n");
    } else {
        printf("Nao ordenados\n");
    }

    return 0;
}


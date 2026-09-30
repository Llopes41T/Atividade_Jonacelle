#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Nao forma triangulo\n");
        return 0;
    }

    if (a == b && b == c) {
        printf("Equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    } else {
        printf("Escaleno\n");
    }

    int a2 = a * a, b2 = b * b, c2 = c * c;
    int maior = a, maior2 = a2;
    if (b > maior) { maior = b; maior2 = b2; }
    if (c > maior) { maior = c; maior2 = c2; }
    int soma = a2 + b2 + c2 - maior2;

    if (maior2 == soma) {
        printf("Retangulo\n");
    } else if (maior2 < soma) {
        printf("Acutangulo\n");
    } else {
        printf("Obtusangulo\n");
    }

    return 0;
}


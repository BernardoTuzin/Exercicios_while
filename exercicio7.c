#include <stdio.h>

int main() {
    int numero, i, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("digite um numero positivo.\n");
        return 1;
    }

    printf("Divisores de %d: ", numero);

    for (i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
            printf("%d", i);

            if (soma < numero) {
                printf(" + ");
            }
        }
    }

    printf(" = %d\n", soma);

    if (soma == numero) {
        printf("%d e um número perfeito.\n", numero);
    } else {
        printf("%d não e um número perfeito.\n", numero);
    }

    return 0;
}

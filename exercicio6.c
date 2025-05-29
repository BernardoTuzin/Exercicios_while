#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
    } else {
        printf("Sequência de Fibonacci com %d termos:\n", n);

        for (i = 0; i < n; i++) {
            if (i == 0) {
                printf("0");
            } else if (i == 1) {
                printf(", 1");
            } else {
                proximo = a + b;
                printf(", %d", proximo);
                a = b;
                b = proximo;
            }
        }
        printf("\n");
    }

    return 0;
}

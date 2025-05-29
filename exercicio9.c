#include <stdio.h>

int main() {
    int numero, maximo, minimo;
    int primeiro = 1; 

    printf("Digite numeros inteiros:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }
4
        if (primeiro) {
            maximo = minimo = numero;
            primeiro = 0;
        } else {
            if (numero > maximo) {
                maximo = numero;
            }
            if (numero < minimo) {
                minimo = numero;
            }
        }
    }

    if (!primeiro) {
        printf("Maximo = %d, Minimo = %d\n", maximo, minimo);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int decimal, binario[32]; 
    int i = 0;

    printf("Digite um numero inteiro decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binario: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}

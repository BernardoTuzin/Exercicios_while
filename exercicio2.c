#include <stdio.h>
int main()
{
    int numero, soma = 0;

    printf("digite um numero");
    scanf("%d", &numero);

    if (numero > 0)
    {
        soma += numero;

        while (numero > 0)
        {
            printf("digite um numero");
            scanf("%d", &numero);

            soma += numero;
        }
        printf("soma é %d", soma);
    }
    else
    {
        printf("soma é %d", soma);
    }

    return 0;
}

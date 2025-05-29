#include <stdio.h>

int main()
{
    int numero, digito;
    int pares = 0, impares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        numero = -numero;
    }

    if (numero == 0)
    {
        pares = 1;
    }
    else
    {
        while (numero > 0)
        {
            digito = numero % 10;
            if (digito % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }

            numero /= 10;
        }
    }

    printf("%d pares, %d impares\n", pares, impares);

    return 0;
}

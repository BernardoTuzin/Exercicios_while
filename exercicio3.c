#include <stdio.h>
int main()
{

    int num, fatorial;

    printf("Digite um numero para saber o fatorial: \n");
    scanf("%d", &num);

    if (num > 0)
    {

        int i = num;
        while (i > 1)
        {
            fatorial *= i;

            i--;
        }

        printf("fatorial de %d é %d\n", num, fatorial);
    }
    else
    {
        printf("numero nao positivo");
    }
    return 0;
}

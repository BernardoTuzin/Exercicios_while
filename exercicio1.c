#include <stdio.h>
int main()
{
    int numero;

    printf("Numero");
    scanf("%d", &numero);

    if (numero >= 0)
    {

        
            while (numero >= 0){
                printf("%d\n", numero);

            numero--;
        }
    }
    else
    {
        printf("numero invalido");
    }

    return 0;
}
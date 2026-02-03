#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int acumulador=0;
    int resultado=0;

    for (acumulador=0; acumulador<5; acumulador++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);
        if (numero<0)
        {
            resultado++;
        }
        
    }

    printf("Los numero negativos son: \n");
    printf("%d", resultado);

    return 0;
    
}
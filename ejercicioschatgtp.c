#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero001=0;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero001);
    if (numero001<0)
    {
        printf("El numero es menor que 0. \n");
        return 0;
    }

    printf("El numero es mayor que 0. \n");
    return 0; 
    
}

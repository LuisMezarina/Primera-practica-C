#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    
    printf("Ingrese el numero a analizar: \n");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("El numero ingresado es un numero par. \n");
        return 0;
    }

    printf("El numero no es par. \n");
    return 0;    
}
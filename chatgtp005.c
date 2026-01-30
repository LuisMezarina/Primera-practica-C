#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    
    printf("Ingrese el numero a analizar: \n");
    scanf("%d", &numero);
    if (numero % 3 == 0 && numero % 5 == 0)
    {
        printf("El numero ingresado es un numero multiplo de 3 y 5. \n");
        return 0;
    }

    printf("El numero no es multiplo de 3 y 5. \n");
    return 0; 
}
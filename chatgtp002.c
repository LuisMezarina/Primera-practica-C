#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1=0, numero2=0;
    printf("Ingrese numero 1: \n");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: \n");
    scanf("%d", &numero2);
    if (numero1<numero2)
    {
        printf("El primer numero es menor que el segundo. \n");
        return 0;
    }
        printf("El primero numero es mayor que el segundo. \n");
        return 0;
    

}
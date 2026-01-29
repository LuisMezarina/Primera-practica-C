#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1=0, numero2=0, numero3=0; 
    printf("Ingrese el primer numero: \n");
    scanf("%d", &numero1); 
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &numero2); 
    printf("Ingrese el tercer numero: \n");
    scanf("%d", &numero3); 

    if (numero1>numero2 && numero1>numero3)
    {
        printf("El primer numero es el mayor. \n");
        return 0;        /* code */
    }
    else if (numero2>numero1 && numero2>numero3)
    {
        printf("El segundo numero es el mayor \n");
        return 0;
    }
    printf("El tercer numero es el mayor. \n");
    return 0;
        
}
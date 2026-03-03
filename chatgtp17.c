#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0, sumatoria=0; 

    printf("Ingrese un numero \n");
    scanf("%d", &numero); 

    while (numero > 0)
    {
        sumatoria += numero;
        printf("Ingrese un numero \n");
        scanf("%d", &numero);
        
    }

    printf("La suma de los numeros ingresados es: \n");
    printf("%d", sumatoria);
    return 0;  
    
}
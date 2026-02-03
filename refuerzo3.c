#include <stdio.h>
#include <stdbool.h>


int main()
{
    int numero=0;
    int numero_mayor=0;
    int numero_menor=0;
    int contador=0;
    int diferencia=0;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    numero_mayor=numero;
    numero_menor=numero;

    for (contador=1; contador<15; contador++)
    {   
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
        if (numero_mayor<numero)
        {
            numero_mayor=numero;
        }
        else if (numero_menor>numero)
        {
            numero_menor=numero; 
        }    
    }

    diferencia=numero_mayor-numero_menor;

    printf("El mayor numero es: \n");
    printf("%d", numero_mayor);
    printf("\n");
    printf("El menor numero es: \n");
    printf("%d", numero_menor);
    printf("\n");
    printf("La diferencia entre el mayor y el menor es: \n");
    printf("%d", diferencia);

    return 0; 
    
}
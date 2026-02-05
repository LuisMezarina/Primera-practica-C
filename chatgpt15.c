#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int contador=1;
    int resultado =0;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero); 

    while (contador<=10)
    {
        resultado = numero * contador;
        printf("%d x %d = %d\n", numero, contador, resultado); 
        printf("\n"); 
        contador++; 
    }

    return 0;
    
}
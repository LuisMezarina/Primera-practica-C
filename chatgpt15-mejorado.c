#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int contador=1;
    
    printf("Ingrese un numero: \n");
    scanf("%d", &numero); 

    while (contador<=10)
    {
        printf("%d x %d = %d\n", numero, contador, numero * contador); 
        printf("\n"); 
        contador++; 
    }

    return 0;
    
}
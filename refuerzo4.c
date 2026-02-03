#include <stdio.h>
#include <stdbool.h>

int main()
{
    int centinela=999;
    int numero=0;
    int numeros_pares=0;
    int numeros_impares=0;
    int porcentaje=0; 
    int total=0;

    while (numero!=centinela)
    {
        printf("Ingrese un numero \n"); 
        scanf("%d", &numero);

        if (numero==centinela)
        {
            break;
        }
        
        else if (numero%2==0)
        {
            numeros_pares++;
        }
        else if (numero%2!=0)
        {
            numeros_impares++;
        }
        
    }


    total = numeros_pares+numeros_impares;
    porcentaje = (numeros_pares * 100) / total;

    printf("Los numeros pares totales son: \n");
    printf("%d", numeros_pares);
    printf("\n"); 
    printf("Los numeros impares totales son: \n");
    printf("%d", numeros_impares);
    printf("\n"); 
    printf("El porcentaje entre numeros pare e impares es: \n"); 
    printf("%d", porcentaje);
    printf("\n"); 
    
}
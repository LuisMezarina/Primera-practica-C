#include <stdio.h>
#include <stdbool.h>

int main()
{
    int centinela=-1, contador=0, numero=0; 

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    while (numero != 0)
    {
        printf("Ingrese un nurmero: \n");
        scanf("%d", &numero); 
        contador++;
    }

    printf("El numero de numeros ingresados es: \n");
    printf("%d", contador);
    return 0;
    
}
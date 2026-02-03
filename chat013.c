#include <stdio.h>
#include <stdbool.h>

int main()
{
    int contador=0;
    int numeroingresado=0;
    int contador_positivo=0;

    for (contador=0; contador<10; contador++)
    {   
        printf("Ingrese un numero: \n");
        scanf("%d", &numeroingresado);
        if (numeroingresado>0)
        {
            contador_positivo++;
        }
        
    }
    printf("El numero de positivos es: \n");
    printf("%d", contador_positivo);
    return 0;
}
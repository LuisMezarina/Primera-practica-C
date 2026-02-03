#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int numero_mayor=0;
    int contador=1;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    numero_mayor=numero;

    for (contador=1; contador<10; contador++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);
        if (numero_mayor<numero)
        {
            numero_mayor=numero;
        }    
    }

    printf("El numero mayor es: \n");
    printf("%d", numero_mayor);
    return 0;
}
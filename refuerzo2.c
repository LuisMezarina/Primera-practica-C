#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int acumulador=0;
    int resultado=0;
    int promedio=0;
    int encima_promedio=0;

    for (acumulador=0; acumulador<12; acumulador++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);
        resultado+=numero;
    }

    promedio=resultado/12;

    if (numero>promedio)
    {
        encima_promedio++;
    }
    




    printf("La sumatoria es: \n");
    printf("%d", resultado);
    printf("\n");
    printf("El promedio de los numeros es: \n");
    printf("%d", promedio);
    printf("\n");
    printf("La cantidad de numeros encima del promedio es: \n");
    printf("%d", encima_promedio); 

    return 0;
    
    
}

// La tercera parte quedo mal porque aun no uso arrays en lenguaje C. 
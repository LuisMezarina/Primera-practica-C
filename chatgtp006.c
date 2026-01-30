#include <stdio.h>
#include <stdbool.h>

int main()
{
    int calificacion=0;
    printf("Ingrese calificacion de alumno entre 0 y 100 \n");
    scanf("%d", &calificacion);
    if (calificacion >= 70)
    {
        printf("Aprobado. \n");
        return 0;
    }
    else if (calificacion > 60 && calificacion < 70)
    {
        printf("Tienes que mejorar \n");
        return 0;
    }
    printf("Desaprobado \n");
    return 0;
}
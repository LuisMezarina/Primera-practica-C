// Determinar si numero ingresado por el usuario es 5 o multiplo de 5

#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    if(numero % 5 == 0)
    {
        printf("Es numero multiplo de 5. \n");
        return 0;
    }   
        printf("El numero no es multiplo de 5. \n");
        
    return 0; 
}
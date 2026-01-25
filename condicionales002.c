// Dda una contraseña ingresada por el usuario hay que validarla. 

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int contrasena=0, contrasena2=0;
    bool bandera=false;

    printf("Ingrese una contraseña: \n");
    scanf("%d", &contrasena);

    while (bandera==false)
    {
        printf("Vuelva a ingresar la contraseña para verificar: \n");
        scanf("%d", &contrasena2);
        if (contrasena==contrasena2)
        bandera=true;
    }
    printf("La contraseña ha sido confirmada\n");
    
return 0;
}

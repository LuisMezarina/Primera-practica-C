#include<stdio.h>
#include<stdbool.h>

int main()
{
    float celsious=0;
    printf("Ingrese una temperatura en Celsious:\n");
    scanf("%f", &celsious);
    float kelvin=celsious+273.15;
    float far=(celsious*1.8)+32;
    printf("La conversion de Celsious a Farenheit para esta temperatura es: %.2f", far);
    return 0; 
}
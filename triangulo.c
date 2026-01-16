#include<stdio.h>
#include<stdbool.h>

int main()
{
    float numero1,numero2,area=0;
    printf("Ingrese numero 1:\n");
    scanf("%f", &numero1);
    printf("Ingrese numero 2:\n");
    scanf("%f", &numero2);
    area= numero1*numero2;
    printf("El area es: %f", area);

    return 1;
}
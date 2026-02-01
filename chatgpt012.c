#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1=0, numero2=0, numero3=0, numero4=0, numero5=0;
    printf("Ingrese primer numero: \n");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: \n");
    scanf("%d", &numero2);
    printf("Ingrese tercer numero: \n");
    scanf("%d", &numero3);
    printf("Ingrese cuarto numero: \n");
    scanf("%d", &numero4);
    printf("Ingrese quinto numero: \n");
    scanf("%d", &numero5);

    int promedio = (numero1+numero2+numero3+numero4+numero5)/5;

    printf("%d", promedio);
    return 0;
}
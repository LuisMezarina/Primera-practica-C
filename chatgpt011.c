#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    int sumatoria=0;

    for (numero=0; numero<=100; numero++)
    {
        sumatoria+=numero;
    }
    printf("%d", sumatoria);
    return 0;
    
}
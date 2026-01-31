#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero=0;
    for (numero=0; numero<=20; numero++)
    {
        if (numero%2!=0)
        {
            printf("%d", numero);
            printf("\n");
        }
    }
    return 0;
    
}
#include <stdio_ext.h>
#include <stdlib.h>

#define LIMITE_ARRAY 5


int main()
{
    int numero[LIMITE_ARRAY];
    int i;
    int contador=0;
    float acumulador=0;
    float promedio;

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        while(scanf("%d",&numero[i]) != 1)
        {
            printf("Reingrese numero %d: ",i+1);
            __fpurge(stdin);
        }
        acumulador+=numero[i];
        contador++;

    }

    promedio=acumulador/contador;
    printf("\nPromedio: %.1f",promedio);

    return 0;
}

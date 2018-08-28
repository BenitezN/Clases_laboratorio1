#include <stdio_ext.h>
#include <stdlib.h>

#define LIMITE_ARRAY 3 // MACRO
#define CLEAR __fpurge(stdin)// MACRO PARA CAMBIAR EL FPURGE POR CLEAR

int main()
{

    int numero[LIMITE_ARRAY];
    int numeroMax;
    int numeroMin;
    int i;

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        printf("Ingrese numero%d: ",i+1);//para que muestre desde 1 y no de 0
        while(scanf("%d",&numero[i]) != 1)
        {
            printf("\nReingrese numero%d: ",i+1);
            CLEAR;
        }
        if(i == 0)
        {
            numeroMax=numero[i];
            numeroMin=numero[i];
        }
        else if(numero[i]>numeroMax)
        {
            numeroMax=numero[i];
        }
        else if(numero[i]<numeroMin)
        {
            numeroMin=numero[i];
        }
    }
    printf("\nMaximo: %d",numeroMax);
    printf("\nMinimo: %d",numeroMin);

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        if(numero[i]>numeroMin && numero[i]<numeroMax)
        {
            printf("\n\nEl numero del medio es: %d", numero[i]);
            break;

        }
    }
/*
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroMax;
    int numeroMin;

    printf("Ingrese numero 1: ");
    while(scanf("%d", &numeroUno) != 1)
    {
        printf("\nReingrese: ");
        __fpurge(stdin); //fflush(stdin) en windows
    }
    numeroMin=numeroUno;
    numeroMax=numeroUno;

    printf("Ingrese numero 2: ");
    while(scanf("%d", &numeroDos) != 1)
    {
        printf("\nReingrese: ");
        __fpurge(stdin); //fflush(stdin) en windows
    }
    if(numeroDos > numeroMax)
    {
        numeroMax=numeroDos;
    }
    else if(numeroDos < numeroMin)
    {
        numeroMin=numeroDos;
    }

    printf("Ingrese numero 3: ");
    while(scanf("%d", &numeroTres) != 1)
    {
        printf("\nReingrese: ");
        __fpurge(stdin); //fflush(stdin) en windows
    }
    if(numeroTres > numeroMax)
    {
        numeroMax=numeroTres;
    }
    else if(numeroTres < numeroMin)
    {
        numeroMin=numeroTres;
    }

    printf("\nMaximo: %d",numeroMax);
    printf("\nMinimo: %d",numeroMin);

    if(numeroUno < numeroMax && numeroUno > numeroMin)
    {
        printf("\nEl del medio es %d: ", numeroUno);
    }
    else if(numeroDos < numeroMax && numeroDos > numeroMin)
    {
        printf("\nEl del medio es %d: ", numeroUno);
    }
    else if(numeroTres < numeroMax && numeroTres > numeroMin)
    {
        printf("\nEl del medio es %d: ", numeroUno);
    }
*/
    return 0;
}

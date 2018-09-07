#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"
#define CANTIDAD_EMPLEADOS 6
#define DATO_INVALIDO -1


int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {50,10,30,50,1,22}; // ESTAN EN EL STACK
    //int i;
/*
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad: ","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }
*/
    array_ordenar(edades,CANTIDAD_EMPLEADOS,0);
    array_mostrar(edades,CANTIDAD_EMPLEADOS);
    //array_minimoDesde(edades,CANTIDAD_EMPLEADOS,2,&i);
    //printf("\n\nIndice: %d",i);
    return 0;
}



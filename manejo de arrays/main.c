#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
#include "arrays.h"

int main()
{
    int listaDeNotas[CANTIDAD];
    array_cargar(listaDeNotas,CANTIDAD);
    array_mostrar(listaDeNotas,CANTIDAD);
    array_mostrarInformacion(listaDeNotas,CANTIDAD);
    calificacionesFinales(listaDeNotas,CANTIDAD);

    return 0;
}

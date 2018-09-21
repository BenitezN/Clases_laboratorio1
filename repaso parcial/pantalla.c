#include <stdio.h>
#include <stdlib.h>
#include "pantalla.h"

static int getNextId();
static int getLugarLibre(ePantalla *array, int len);

int pantalla_init(ePantalla *array, int len)
{
    int retorno = -1;
    int i;
    if(array != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            array[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;

}

ePantalla* pantalla_getById(ePantalla *array, int len,int id)
{
    int *retorno = NULL;
    int i;
    if(array != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            if(!array[i].isEmpty && array)///analizar las no vacias
            {

                retorno = &array[i]; //[array + i]
                break;
            }
        }
    }
    return retorno;

}

int pantalla_alta(ePantalla *array, int len)
{
    int retorno = -1;
    int indice;

    char nombre[50];
    char direccion[200];
    float precio;
    int tipo;

    indice = getLugarLibre(array,len);
    if( array != NULL && len > 0 &&
        indice >= 0 && indice < len
        && array[indice].isEmpty)
    {
        if( !utn_getNombre(nombre,50,"Nombre producto?\n","nombre no valido\n",2) &&
            !utn_getNombre(direccion,200,"Descripcion producto?\n","descrpcion no valido\n",2))
        {
            strncpy(array[indice].nombre,nombre,50);
            strncpy(array[indice].direccion,direccion,200);
            array[indice].isEmpty = 0;
            array[indice].id= getNextId();
            retorno = 0;
        }
    }
    return retorno;

}
static int getLugarLibre(ePantalla *array, int len)
{
    int retorno = -1;
    int i;
    if(array!= NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            if(array[i].isEmpty)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

static int getNextId()
{
    static int ultimoId=-1;
    ultimoId++;
    return ultimoId;
}

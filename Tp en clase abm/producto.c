#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "producto.h"

static int getNextId();
static int lugarLibre(eProducto arrayProducto[],int len);

int producto_init(eProducto arrayProducto[],int len,int valor)///el valor se usa
{
    int retorno = -1;
    int i;
    if(arrayProducto != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            arrayProducto[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;
}

int producto_altaProducto(eProducto arrayProducto[],int len)
{
    int retorno = -1;
    int indice;
    char auxNombre[50];
    char auxDescripcion[200];
    float auxPrecio=13.55;

    indice=lugarLibre(arrayProducto,len);
    if( arrayProducto != NULL && len > 0 &&
        indice >= 0 && indice < len
        && arrayProducto[indice].isEmpty)
    {
        if( !utn_getNombre(auxNombre,50,"Nombre producto?\n","nombre no valido\n",2) &&
            !utn_getNombre(auxDescripcion,200,"Descripcion producto?\n","descrpcion no valido\n",2))
        {
            strncpy(arrayProducto[indice].nombre,auxNombre,50);
            strncpy(arrayProducto[indice].descripcion,auxDescripcion,200);
            arrayProducto[indice].precio = auxPrecio;
            arrayProducto[indice].isEmpty = 0;
            arrayProducto[indice].id= getNextId();
            retorno = 0;
        }
    }
    return retorno;
}


int producto_mostrar(eProducto arrayProducto[],int len)
{
    int retorno = -1;
    int i;
    if(arrayProducto != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            if(!arrayProducto[i].isEmpty)
            {
                printf("\nNombre: %s - Descripcion: %s - Precio:%.2f",arrayProducto[i].nombre,arrayProducto[i].descripcion,arrayProducto[i].precio);
            }
        }
        retorno = 0;
    }
    return retorno;
}


static int lugarLibre(eProducto arrayProducto[],int len)
{
    int retorno = -1;
    int i;
    if(arrayProducto != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            if(arrayProducto[i].isEmpty)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

static int getNextId()///devuelve el proximo id
{
    static int ultimoId=-1;
    ultimoId++;
    return ultimoId;
}

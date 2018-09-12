#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#define CLEAR __fpurge(stdin)

void ingresarNombre(char []);
int esUnNombreValido(char* nombre[]);

int main()
{
    char nombre[20];
    ingresarNombre(nombre);
    return 0;
}

void ingresarNombre(char nombre[])
{
    do{
        printf("Ingrese nombre: ");
        fgets(nombre,20,stdin);
        CLEAR;
    }while(esUnNombreValido(&nombre)==0);
}

int esUnNombreValido(char* nombre[])
{
    int i;
    int tamanio;
    int retorno=0;
    tamanio=strlen(&nombre);
    for(i=0;i<tamanio;i++)
    {
        if(nombre[i]== '@')
        {
            retorno=1;
        }
    }
    return retorno;
}

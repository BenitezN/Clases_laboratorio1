#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

int main()
{
    char usuario[9];
    char clave[6];
    char auxUser[]="admin\n";
    char auxClave[]="admin\n";

    printf("\nusuario: ");
    fgets(usuario,16,stdin);
    __fpurge(stdin);
     printf("\nclave: ");
    fgets(clave,9,stdin);
    __fpurge(stdin);

    int otroAux=strlen(usuario);
    printf("\n tamanio %d \n",otroAux);

    printf("\n c:%s u:%s",clave,usuario);
    int retorno;
    retorno = strcmp(usuario,clave);
    printf("\nretorno: %d \n",retorno);

    if( strcmp(usuario,auxUser) == 0 && strcmp(clave,auxClave)==0)
    {
        printf("ingreso!!!");

    }
    else
    {

        printf("nooooo");
    }
/*
    char nombre[25];
    char apellido[25];
    char localidad[25];
    int tamanio;

    tamanio=sizeof(nombre);
    printf("antes: %d \n",tamanio);

    printf("Ingrese nombre: ");
    scanf("%s",nombre);

    tamanio=sizeof(nombre);
    printf("despues: %d \n",tamanio);

    printf("el nombre ingresado es: %s",nombre);

    fgets(nombre,11,stdin);
    __fpurge(stdin);
    fgets(apellido,11,stdin);
    __fpurge(stdin);
    fgets(localidad,11,stdin);
    __fpurge(stdin);
    printf("nombre: %s apellido: %s localidad %s",nombre,apellido,localidad);
*/
    return 0;

}

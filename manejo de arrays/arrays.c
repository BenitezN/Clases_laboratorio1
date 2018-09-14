#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
#include "arrays.h"

/**
* \brief Carga el array con valores
* \param notas[] El array a recorrer
* \param tam EL tamaño del array
*/
void array_cargar(int notas[],int tam)
{
    int i;
    int numeroIngresado;
    for(i=0;i<tam;i++)
    {
        do{
            printf("\n Ingrese nota: ");
            scanf("%d",&numeroIngresado);
            notas[i]=numeroIngresado;
        }while(notas[i]<0 || notas[i]>10);
    }
}

/**
* \brief Muestra el contenido del array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
*/
void array_mostrar(int notas[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\nLa nota ingresada es: %d",notas[i]);
    }
}

/**
* \brief Busca el numero mayor en un array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \return Retorna el numero mayor
*/
int array_buscarMayor(int notas[],int tam)
{
    int i;
    int mayor;
    for(i=0;i<tam;i++)
    {
        if(i==0 || notas[i]>mayor)
        {
           mayor=notas[i];
        }
    }
    return mayor;
}

/**
* \brief Busca el numero menor en un array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \return Retorna el numero menor
*/
int array_buscarMenor(int notas[],int tam)
{
    int i;
    int menor;
    for(i=0;i<tam;i++)
    {
        if(i==0 || notas[i]<menor)
        {
           menor=notas[i];
        }
    }
    return menor;
}

/**
* \brief Busca la cantidad de pares encontrados en un array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \return Retorna la cantidad de pares obtenidos
*/
int array_buscarCantidadDePares(int notas[],int tam)
{
    int i;
    int par=0;
    for(i=0;i<tam;i++)
    {
        if(notas[i]%2 == 0)
        {
            par++;
        }
    }
    return par;
}

/**
* \brief Calcula la suma total del array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \return Retorna la suma total del array
*/
int array_retornarTotal(int notas[],int tam)
{
    int suma=0;
    int i;
    for(i=0;i<tam;i++)
    {
        suma+=notas[i];
    }
    return suma;
}

/**
* \brief Calcula la promedio total del array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \return Retorna la promedio total del array
*/
int array_promedio(int notas[],int tam)
{
    float promedio;
    int suma;
    suma=array_retornarTotal(notas,tam);
    promedio=suma/tam;
    return promedio;
}

/**
* \brief Muestra informacion del array(Suma de valores,promedio,mayor,menor,etc)
* \param notas[] El array a recorrer
* \param tam El tamaño del array
*/
void array_mostrarInformacion(int notas[],int tam)
{
    int mayor;
    int menor;
    int par;
    int suma;
    float promedio;

    suma=array_retornarTotal(notas,tam);
    promedio=array_promedio(notas,tam);
    mayor=array_buscarMayor(notas,tam);
    menor=array_buscarMenor(notas,tam);
    par=array_buscarCantidadDePares(notas,tam);

    printf("\n\nLa suma de las notas es: %d", suma);
    printf("\nEl promedio de las notas es: %.1f", promedio);
    printf("\nEl mayor es: %d", mayor);
    printf("\nEl menor es: %d", menor);
    printf("\nLa cantidad de pares es: %d", par);
}

/**
* \brief Busca la cantidad de ingresos entre limites establecidos en un array
* \param notas[] El array a recorrer
* \param tam El tamaño del array
* \param limInferior Limite inferior para la busqueda
* \param limSuperior Limite superior para la busqueda
* \return Retorna la cantidad de ingresos
*/
int array_retornarCantidadEntreNotas(int notas[],int tam,int limInferior,int limSuperior)
{
    int i;
    int cantidadEntreNotas=0;
    for(i=0;i<tam;i++)
    {
        if(notas[i]>=limInferior && notas[i]<=limSuperior)
        {
            cantidadEntreNotas++;
        }
    }
    return cantidadEntreNotas;
}

/**
* \brief Muestra cantidad de calificaciones aprobadas,desaprobadas y sin instancia de final
* \param notas[] El array a recorrer
* \param tam El tamaño del array
*/
void calificacionesFinales(int notas[],int tam)
{
   int aprobado;
   int desaprobado;
   int sinFinal;
   aprobado=array_retornarCantidadEntreNotas(notas,tam,4,7);
   desaprobado=array_retornarCantidadEntreNotas(notas,tam,1,3);
   sinFinal=array_retornarCantidadEntreNotas(notas,tam,8,10);

   printf("\nCantidad de aprobados: %d", aprobado);
   printf("\nCantidad de desaprobados: %d", desaprobado);
   printf("\nCantidad de aprobados sin final: %d", sinFinal);

}

 #endif// ARRAY_H_INCLUDED

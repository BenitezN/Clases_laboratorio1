#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#define CANTIDAD 5
#define true 1
#define false 0

int array_retornarTotal(int notas[],int tam);
int array_promedio(int notas[],int tam);
void array_cargar(int notas[],int tam);
void array_mostrar(int notas[],int tam);
void array_mostrarInformacion(int notas[],int tam);
int array_buscarMayor(int notas[],int tam);
int array_buscarMenor(int notas[],int tam);
int array_buscarCantidadDePares(int notas[],int tam);
int array_retornarCantidadEntreNotas(int notas[],int tam,int limInferior,int limSuperior);
void calificacionesFinales(int notas[],int tam);

 #endif// ARRAY_H_INCLUDED

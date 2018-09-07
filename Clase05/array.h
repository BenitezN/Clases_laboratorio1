#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#define false 0
#define true 1
#define DATO_INVALIDO -1

void array_mostrar(int* pArray, int limite);
int array_minimoDesde(int* pArray, int limite, int desde, int *pMinimo);
int array_ordenar(int* pArray, int limite, int orden);

#endif //ARRAY_H_INCLUDED

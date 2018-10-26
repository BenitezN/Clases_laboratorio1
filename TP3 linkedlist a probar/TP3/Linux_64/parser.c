#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char bufferInt[1024];
    char bufferNombre[1024];
    char bufferHorasTrabajadas[1024];
    char bufferSueldo[1024];
    int retorno= -1;
    int flagOnce=1;
    if(pFile != NULL)
    {
        while(!feof(pFile))///iterar mientras no estoy en el final del archivo
        {
            if(flagOnce)///lo descarta
            {
                flagOnce=0;
                fscanf("%[^,],%[^,],%[^,],%[^\n]\n", bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);///regla de memotecnica
            }
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);
            printf("%[^,],%[^,],%[^,],%[^\n]\n", bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);

        }
    }


    return retorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}

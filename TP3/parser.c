#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include <string.h>

int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{

    Employee* aux;
    int ret = 0;
    char id[50];
    char nombre[50];
    char horasTrabajadas[50];
    char sueldo[50];

    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);//encabezado
        while(!feof(pFile))
        {
            if(feof(pFile))
            break;
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
            aux = employee_newParametros(id, nombre, horasTrabajadas,sueldo);
            ll_add(pArrayListEmployee,aux);
        }
        ret = 1;
        fclose(pFile);
    }
    return ret;
}


int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    return 1;
}

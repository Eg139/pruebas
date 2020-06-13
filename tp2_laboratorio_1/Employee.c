#include <stdlib.h>
#include <stdio.h>
#include "Employee.h"
#include <string.h>

Employee* employee_new()
{
    Employee* employee = (Employee*) malloc(sizeof(Employee));
    if(employee == NULL)
    {
        printf("No fue posible crear un empleado");
    }
    return employee;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* employee = (Employee*) malloc(sizeof(Employee));
    if(employee != NULL)
    {
        employee->id = 0;
        employee->horasTrabajadas = 0;
        strcpy(employee->nombre,"");
        employee->sueldo = 0;
    }
    return employee;
}

int employee_setNombre(Employee* employee,char* nombre)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        strcpy(employee->nombre, nombre);
    }

    return retorno;
}

int employee_getNombre(Employee* employee,char* nombre)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        strcpy(nombre,employee->nombre);
    }
    return retorno;
}



int employee_setSueldo(Employee* employee,int sueldo)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        employee->sueldo = sueldo;
    }

    return retorno;
}
int employee_getSueldo(Employee* employee,int* sueldo)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        *sueldo = employee->sueldo;
    }

    return retorno;

}

int employee_setId(Employee* employee,int id)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        employee->id = id;
    }

    return retorno;
}
int employee_getId(Employee* employee,int* id)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        *id = employee->id;
    }

    return retorno;
}

int employee_setHorasTrabajadas(Employee* employee,int horasTrabajadas)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        employee->horasTrabajadas = horasTrabajadas;
    }

    return retorno;
}
int employee_getHorasTrabajadas(Employee* employee,int* horasTrabajdas)
{
    int retorno=0;
    if(employee !=NULL )
    {
        retorno=1;
        *horasTrabajdas = employee->horasTrabajadas;
    }

    return retorno;

}


int employee_CompareByName(void* employee1, void* employee2)
{
    //verificar nulidad
    Employee* emp1;
    Employee* emp2;
    char nombre[50];
    char nombre2[50];
    if(emp1 != NULL && emp2 != NULL)
    {
        emp1 = (Employee*)employee1;
        emp2 = (Employee*)employee2;

        employee_getNombre(emp1,nombre);
        employee_getNombre(emp2,nombre2);
    }


    return strcmpi(emp1->nombre, emp2->nombre);
}

int employee_CompareById(void* employee1, void* employee2)
{
    //verificar nulidad
    Employee* emp1;
    Employee* emp2;


    if(emp1 != NULL && emp2 != NULL)
    {
    emp1 = (Employee*) employee1;
    emp2 = (Employee*) employee2;

        if(emp1->id > emp2->id)
        {
            return 1;
        }
        else
        {
            if(emp1->id < emp2->id)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }

    return strcmp(emp1->nombre, emp2->nombre);

}

int show_employee(Employee* employee)
{
    int ret = -1;
    Employee* aux;
    int id;
    char nombre[50];
    int horasTrabajadas;
    int sueldo;

    if(aux != NULL)
    {

            printf("%d--%s--%d--%d\n",id,nombre,horasTrabajadas,sueldo);
            ret = 0;
    }


return ret;
}
/*
void sort_employee_name(Employee* employee)
{
    Employee* employeeList;
    Employee* aux;
    int size;
    int i;
    size = ll_len(employeeList);
    ll_sort(employeeList,employee_CompareByName,1);
    printf("Lista ordenada por nombre\n");
    for(i=0; i<size; i++)
    {
        aux =(Employee*) ll_get(employeeList, i);
        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);

    }
}*/
/*
void sort_employee_id()
{
    Employee* employee;
    size = ll_len(miLista);

    ll_sort(miLista,employee_CompareById,1);
    printf("Lista ordenada por Id\n");
    for(i=0; i<size; i++)
    {
        aux =(Employee*) ll_get(miLista, i);
        printf("%d--%s--%d--%d\n", aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);

    }
}*/
void menu()
{
    printf("Menu:\n");
    printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
    printf("2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n");
    printf("3. Alta de empleado\n");
    printf("4. Modificar datos de empleado\n");
    printf("5. Baja de empleado\n");
    printf("6. Listar empleados\n");
    printf("7. Ordenar empleados\n");
    printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
    printf("9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n");
    printf("10. Salir\n");
}

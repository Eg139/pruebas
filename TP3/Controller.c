#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"



int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    FILE* employee;
    int ret = -1;

    if(path != NULL && pArrayListEmployee != NULL)
    {
        ll_clear(pArrayListEmployee);

        employee=fopen(path, "r");
        if(employee != NULL)
        {
           ret = parser_EmployeeFromText(employee,pArrayListEmployee);
        }

    }
    return ret;
}


int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{
    ll_clear(pArrayListEmployee);
return 1;
}


int controller_addEmployee(LinkedList* pArrayListEmployee)
{

return 1;
}


int controller_editEmployee(LinkedList* pArrayListEmployee)
{
return 1;
}


int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
return 1;
}


int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
return 1;
}


int controller_sortEmployee(LinkedList* pArrayListEmployee)
{

return 1;
}


int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{

return 1;
}


int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{
return 1;
}


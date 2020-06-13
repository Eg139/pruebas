#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include <string.h>


int main()
{
    LinkedList* miLista = ll_newLinkedList();
    menu();
    int option;

    do
    {
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            controller_loadFromText("data.csv",miLista);
            printf("Empleado ingresado");
        break;
        case 2:
            controller_loadFromBinary("data.csv",miLista);
        break;
        case 3:
            controller_addEmployee(miLista);
        break;
        case 4:
            controller_editEmployee(miLista);
        break;
        case 5:
            controller_removeEmployee(miLista);
        break;
        case 6:
            controller_ListEmployee(miLista);
        break;
        case 7:
            controller_sortEmployee(miLista);
        break;
        case 8:
            controller_saveAsText("data.csv",miLista);
        break;
        case 9:
            controller_saveAsBinary("data.bin",miLista);
        break;
        case 10:
        break;
        }
    }while(option != 10);
    return 0;
}

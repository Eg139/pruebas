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
    scanf("%d", &option);
    do
    {
        switch(option)
        {
        case 1:
            controller_loadFromText("data.csv",miLista);
        break;
        case 2:
            controller_loadFromBinary("data.csv",miLista);
        break;
        case 3:

        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
        break;
        }
    }while(option != 10);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define T 10

int main()
{
    int opcion = 0;
    eEmployee listaDeEmployees[T];
    inicializarEmployees(listaDeEmployees, T);
    hardCodear(listaDeEmployees);


    do{
    opcion = menuUsuario("1. INGRESAR EMPLEADO\n2. MOSTRAR EMPLEADO\n3. INFORMAR\n4. ELIMINAR EMPLEADOS\n5. MODIFICAR EMPLEADOS\n6.SALIR\nELIJA UNA OPCION: ");
    system("cls");
    switch(opcion)
    {
        case 1:
            cargarUnEmployees(listaDeEmployees, T);
        break;

        case 2:
            printf("LISTA DE EMPLEADOS!!!!!\n");
            //fflush(stdin);
            mostrarTodosLosEmployees(listaDeEmployees, T);
        break;
        case 3:
                fflush(stdin);
                opcion = menuUsuario("QUE DESEA INFORMAR\n1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector\n2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio\n");
                switch(opcion)
                {
                    case 1:
                        ordenarEmployeesLastNameSector(listaDeEmployees, T);
                        mostrarTodosLosEmployees(listaDeEmployees, T);
                    break;

                    case 2:
                        mostrarSalarios(listaDeEmployees, T);
                    break;
                }
                system("pause");
                system("cls");
        break;
        case 4:
            eliminarEmployee(listaDeEmployees, T);
            break;
        case 5:
            mostrarTodosLosEmployees(listaDeEmployees, T);
            modificarEmployee(listaDeEmployees, T);
            break;
        case 6:
        break;

    }
    }while(opcion != 6);

}

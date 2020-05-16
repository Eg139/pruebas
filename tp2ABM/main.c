#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define T 10

int main()
{
    int opcion = 0;
    int employeeFlag =0;
    eEmployee listEmployees[T];
    initEmployees(listEmployees, T);
    hardCodear(listEmployees);
    int retorno = -1;


    do{
    opcion = menuUser("1. INGRESAR EMPLEADO\n2. MOSTRAR EMPLEADO\n3. INFORMAR\n4. ELIMINAR EMPLEADOS\n5. MODIFICAR EMPLEADOS\n6.SALIR\nELIJA UNA OPCION: ");
    system("cls");
    while(opcion > 6 || opcion < 1)
    {
        printf("OPCION INCORRECTA, REINGRESE UNA OPCION VALIDA\n");
        opcion = menuUser("1. INGRESAR EMPLEADO\n2. MOSTRAR EMPLEADO\n3. INFORMAR\n4. ELIMINAR EMPLEADOS\n5. MODIFICAR EMPLEADOS\n6.SALIR\nELIJA UNA OPCION: ");
    }
    switch(opcion)
    {
        case 1:
            retorno = addEmployees(listEmployees, T);
            if(retorno == 0)
            {
             printf("\nEMPLEADO INGRESADO CON EXITO\n");
             employeeFlag = 1;
             system("pause");
             system("cls");
            }else{
                printf("ERROR!!!!\n NO HAY ESPACIO PARA AGREGAR EMPLEADOS");
                system("pause");
                system("cls");
            }

        break;

        case 2:
                                    fflush(stdin);
            if(employeeFlag == 1){
            printf("LISTA DE EMPLEADOS!!!!!\n");
            //fflush(stdin);
            if(printEmployees(listEmployees, T)==0)
                {
                printf("\nEMPLEADOS MOSTRADOS CON EXITO\n");
                system("pause");
                system("cls");
            }else{
                printf("ERROR!!!!\n");
                system("pause");
                system("cls");
            }
            }
            else{
                printf("No se cargo un empleado, porfavor ingrese un empleado\n");
            }
        break;
        case 3:
            if(employeeFlag == 1){
                fflush(stdin);
                opcion = menuUser("QUE DESEA INFORMAR:\n1. Listado de los empleados ordenados alfabeticamente por Apellido y Sector\n2. Total y promedio de los salarios, y cuantos empleados superan el salario promedio\nElija una opcion: ");
                switch(opcion)
                {
                    case 1:
                        sortEmployees(listEmployees, T);
                        printEmployees(listEmployees, T);
                    break;

                    case 2:
                        showSalary(listEmployees, T);
                    break;
                }
            }
                else{
                printf("No se cargo un empleado, porfavor ingrese un empleado\n");
            }
                system("pause");
                system("cls");
        break;
        case 4:
            if(employeeFlag == 1){
                if(removeEmployee(listEmployees, T)==0)
                {
                    printf("El empleado se elimino con exito\n");
                }else
                {
                  printf("Error! No se pudo eliminar empleado, El Id estaba libre\n");
                }
            }else{
                printf("No se cargo un empleado, porfavor ingrese un empleado\n");
            }
            break;
        case 5:
            if(employeeFlag == 1)
                {
            printEmployees(listEmployees, T);
            if(modifyEmployee(listEmployees, T)==0)
            {
                printf("El empleado se modifico con exito\n");
            }
            else
            {
                printf("No modifico ningun dato\n");
            }
            }else{
                printf("No se cargo un empleado, porfavor ingrese un empleado\n");
            }
            break;
        case 6:
        break;

    }
    }while(opcion != 6);

}

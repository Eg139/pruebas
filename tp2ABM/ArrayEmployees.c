#include <stdio.h>
#include "ArrayEmployees.h"
#include <string.h>

int menuUsuario(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}


void modificarEmployee(eEmployee listado[], int len)
{
    int posicion;
    int id;
    int eleccion = 0;
    int i;

    printf("\nINGRESE EL ID DEL EMPLEADO QUE DESEA MODIFICAR ");
    scanf("%d", &id);
    do{
            printf("MODIFICAR: \n");
            eleccion = menuUsuario("1. NOMBRE\n2. APELLIDO\n3.SALARIO\n4. SECTOR\n5. SALIR\nElija una opcion: ");

            for(i = 0; i< len; i++)
              {
              if(id == listado[i].id)
                {
                   posicion = i;
                   break;
                }
              }
     switch(eleccion)
      {
          case 1://name
                    printf("REINGRESE EL NOMBRE: ");
                    fflush(stdin);
                    gets(listado[posicion].name);
            break;

          case 2://lastName
                    printf("REINGRESE EL APELLIDO: ");
                    fflush(stdin);
                    gets(listado[posicion].lastName);
            break;

          case 3:
                    printf("REINGRESE EL SALARIO: ");
                    scanf("%f", &listado[posicion].salary);
            break;

          case 4: //sector
                    printf("REINGRESE EL SECTOR: ");
                    scanf("%d", &listado[posicion].sector);
            break;


          case 5:
            break;
      }
    }while(eleccion != 5);


}
void eliminarEmployee(eEmployee listado[], int len)
{
    int id;
    int i;
    printf("INGRESE EL ID DEL EMPLEADO QUE DESEA ELIMINAR: ");
    scanf("%d", &id);
    for(i = 0; i<len; i++)
    {
        if(id == listado[i].id)
        {
            listado[i].isEmpty = LIBRE;
            break;
        }
    }
}



void hardCodear(eEmployee listado[])
{
    int ids[5] = {1,2,3,4,5};
    int salary[5] = {9000.50,4841.64,10000.00,98410.15,5800.1};
    int sector[5] = {1,2,5,4,3};
    char name[5][20] ={"Pepe","lucia","ricardo","alex","fatiga"};
    char lastName[5][20] = {"Argento", "Gutierrez","Cosentino","Aprea","Argento"};
    int i;

    for(i = 0; i<5; i++)
    {
       listado[i].id = ids[i];
       listado[i].salary = salary[i];
       listado[i].sector = sector[i];
       strcpy(listado[i].name, name[i]);
       strcpy(listado[i].lastName, lastName[i]);
       listado[i].isEmpty = OCUPADO;
    }

}


void inicializarEmployees(eEmployee listado[], int len)
{
   int i;
    for(i = 0; i < len; i++)
    {
        listado[i].isEmpty = LIBRE;
    }
}
int buscarLibre(eEmployee listado[], int len)
{
    int i;
    int indice = -1;
    for(i = 0; i < len; i++)
    {
        if(listado[i].isEmpty == LIBRE)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void cargarUnEmployees(eEmployee listado[], int len)
{
    int indice;
    //int i;
    indice = buscarLibre(listado, len);
    if(indice != -1)
    {
        listado[indice] = crearUnEmployee(indice+1);
    }

}
void mostrarTodosLosEmployees(eEmployee listado[], int len)
{
    int i;
    printf("   ID   \tNOMBRE      APELLIDO     SALARIO   SECTOR\n");
    for(i = 0; i < len; i++)
    {
        if(listado[i].isEmpty == OCUPADO)
        {
            mostrarUnEmployee(listado[i]);
        }
    }
}

void mostrarUnEmployee(eEmployee miEmployee)
{

       printf("%4d %15s %15s \t%8.2f %4d\n",miEmployee.id,
                                                miEmployee.name,
                                                miEmployee.lastName,
                                                miEmployee.salary,
                                                miEmployee.sector);
}
eEmployee crearUnEmployee(int id)
{
    eEmployee miEmployee;

    miEmployee.isEmpty = OCUPADO;

    miEmployee.id = id;
    printf("INGRESE EL NOMBRE: ");
    fflush(stdin);
    gets(miEmployee.name);
    printf("INGRESE EL APELLIDO: ");
    fflush(stdin);
    gets(miEmployee.lastName);
    printf("INGRESE EL SALARIO: ");
    scanf("%f", &miEmployee.salary);
    printf("INGRESE EL SECTOR: ");
    scanf("%d", &miEmployee.sector);


    return miEmployee;
}



void ordenarEmployeesLastNameSector(eEmployee listado[], int len)
{
    int i;
    int j;
    eEmployee auxEmployee;

    for(i = 0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(strcmp(listado[i].lastName, listado[j].lastName)>0)
            {
                auxEmployee = listado[i];
                listado[i] = listado[j];
                listado[j] = auxEmployee;
            }
            else
            {
                if(strcmp(listado[i].lastName, listado[j].lastName)==0)
                {
                    if(listado[i].sector > listado[j].sector)
                    {
                        auxEmployee = listado[i];
                        listado[i] = listado[j];
                        listado[j] = auxEmployee;
                    }
                }
            }
        }
    }
}
void mostrarSalarios(eEmployee listado[], int len)
{
    int i;
    int acumulador = 0;
    int contador = 0;
    float promedio;
    for(i = 0; i<len; i++)
    {
        if(listado[i].isEmpty == OCUPADO)
        {
                   acumulador = acumulador + listado[i].salary;
                   contador++;
        }
    }
    promedio = (float)acumulador/contador;

    printf("El TOTAL DE LOS SALARIOS ES: %d Y EL PROMEDIO DE LOS MISMOS ES: %.2f", acumulador,promedio);
}

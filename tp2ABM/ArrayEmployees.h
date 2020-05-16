#define LIBRE 0
#define OCUPADO 1
#include "Gets.h"
#include "Validate.h"

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;



int modifyEmployee(eEmployee listado[], int len);
int removeEmployee(eEmployee listado[], int len);
int searchFree(eEmployee listado[], int len);
int initEmployees(eEmployee listado[], int len);
int menuUser(char texto[]);
int addEmployees(eEmployee listado[], int len);
int printEmployees(eEmployee listado[], int len);
void printEmployee(eEmployee miEmployee);
eEmployee createEmployee();
void sortEmployees(eEmployee listado[], int len);
void hardCodear(eEmployee listado[]);
void showSalary(eEmployee listado[], int len);
int findEmployeeById(char message[],eEmployee listado[], int len);

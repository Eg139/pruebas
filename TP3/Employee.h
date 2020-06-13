#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED

typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr);
void employee_delete();

int employee_setId(Employee* employee,int id);
int employee_getId(Employee* employee,int* id);

int employee_setNombre(Employee* employee,char* nombre);
int employee_getNombre(Employee* employee,char* nombre);

int employee_setHorasTrabajadas(Employee* employee,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* employee,int* horasTrabajadas);

int employee_setSueldo(Employee* employee,int sueldo);
int employee_getSueldo(Employee* employee,int* sueldo);

int employee_CompareByName(void* e1, void* e2);
int employee_CompareById(void* e1, void* e2);


void show_employee(Employee* employee);

void menu();

#endif // employee_H_INCLUDED

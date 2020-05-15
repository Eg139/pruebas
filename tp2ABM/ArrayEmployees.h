#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    char name[20];
    char lastName[20];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;



void modificarEmployee(eEmployee listado[], int len);
void eliminarEmployee(eEmployee listado[], int len);
int buscarLibre(eEmployee listado[], int len);
void inicializarEmployees(eEmployee listado[], int len);
int menuUsuario(char texto[]);
void cargarUnEmployees(eEmployee listado[], int len);
void mostrarTodosLosEmployees(eEmployee listado[], int len);
void mostrarUnEmployee(eEmployee miEmployee);
eEmployee crearUnEmployee();
void ordenarEmployeesLastNameSector(eEmployee listado[], int len);
void hardCodear(eEmployee listado[]);
void mostrarSalarios(eEmployee listado[], int len);

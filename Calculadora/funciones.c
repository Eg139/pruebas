#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float numero(){
	float conseguirNumero;
	printf("Ingrese un numero: ");
	scanf("%f", &conseguirNumero);
	return conseguirNumero;
}
void menu(float num, float num1){
    float resultadoS;
	float resultadoR;
	float resultadoM;
	float resultadoD;
    int factorialA;
    int factorialB;
	int opcion;
	int flagNumero1 = 0;
	int flagNumero2 = 0;
do{
	printf("\n\nBIENVENIDO AL MENU DE OPCIONES \n");
	printf("  Seleccione una opcion  \n");
	printf("1) Ingresar 1er valor (A= %.2f ) \n", num);
	printf("2) Ingresar 2do valor (B= %.2f ) \n", num1);
	printf("3) Calcular todas las operaciones. \n");
	printf("        a) Calcular la suma (A= %.2f ) + (B= %.2f) \n", num, num1);
	printf("        b) Calcular la resta (A= %.2f ) - (B= %.2f) \n", num, num1);
	printf("        c) Calcular la division (A= %.2f ) / (B= %.2f) \n", num, num1);
	printf("        d) Calcular la multiplicacion (A= %.2f ) * (B= %.2f) \n", num, num1);
	printf("        e) Calcular el factorial (A!= %.2f) \n", num);
	printf("        f) Calcular el factorial (B!= %.2f) \n", num1);
	printf("4) Informar resultados \n");
	printf("5) Salir\n\n");
	fflush(stdin);
	scanf("%d", &opcion);
	while(opcion<1 || opcion>5){
		printf("ERROR! Eso no es una opcion, reingrese opcion \n");
		fflush(stdin);
		scanf("%d", &opcion);
		system("cls");
	}
	switch(opcion){
	case 1:
		num = numero();
		flagNumero1 = 1;
		system("cls");
		break;
	case 2:
		num1 = numero();
		flagNumero2 = 1;
		system("cls");
		break;
	case 3:
	    if(flagNumero1 == 1 && flagNumero2 == 1){
		printf("Se ha realizado todas las operaciones.\n");
		    resultadoS=suma(num, num1);
			resultadoR=resta(num, num1);
			resultadoM=multiplicacion(num, num1);
        	resultadoD = validacionDivision(num, num1);
        	factorialA = validacionFactorial(num);
            factorialB = validacionFactorial (num1);
            fflush (stdin);
            system("pause");
            system("cls");
            }else
            {
                if((flagNumero1 == 1 && flagNumero2 == 0)||(flagNumero1 == 0 && flagNumero2 == 1)||(flagNumero1 == 0 && flagNumero2 == 0))
                    {
                        printf ( "\n ERROR! no ingreso ningun valor en A o B. \n" );
                        system("pause");
                        system("cls");
                    }
            }
		break;
	case 4:
	    if(flagNumero1 == 1 && flagNumero2 == 1){
		printf("El resultado de  a + b es: %.2f\n", resultadoS);
		printf("el resultado de  a - b es: %.2f\n", resultadoR);
		printf("La multiplicacion es: %.2f\n", resultadoM);
		if(resultadoD == 'E')
    		{
    			printf("No se puede realizar la operacion, porque no se puede dividir por 0.\n");
    		}
    		    else
    		{
    		    printf("La division es: %.2f\n", resultadoD);
    		}
		if (factorialA !=0)
    	    {
    	      printf ("\nEl factorial de A es %d \n", factorialA);
    	    }
    	        else
    	    {
    	      printf("\nNo se puede calcular el factorial de un numero con coma o negativo.\n");
    	    }
	    if (factorialB !=0)
	        {
    	      printf ("\nEl factorial de B es %d \n", factorialB);
    	    }
        	  else
    	    {
    	      printf("\nNo se puede calcular el factorial de un numero con coma y/o negativo.\n");
    	    }
    	    system("pause");
    	    system("cls");
	    }else
            {
                if((flagNumero1 == 1 && flagNumero2 == 0)||(flagNumero1 == 0 && flagNumero2 == 1)||(flagNumero1 == 0 && flagNumero2 == 0))
                    {
                        printf ( "\n ERROR! no ingreso ningun valor en A o B. \n " );
                        system("pause");
                        system("cls");
                    }
            }

	  break;
	case 5:
		printf("\nPara salir presione 5\n\n");
		break;
	}
}while(opcion != 5);
}
float suma(float num, float num1)
{
	float resultadoS;
	resultadoS = num + num1;
	return resultadoS;
}
float resta(float num, float num1)
{
	float resultadoR;
	resultadoR = num-num1;
	return resultadoR;
}
float multiplicacion(float num, float num1)
{
	float resultadoM;
	resultadoM = num * num1;
	return resultadoM;
}
float validacionDivision (float num, float num1)
{
    char valor;
    float resultado;
  if(num1!=0)
  {
      resultado = num / num1;
	return resultado;
    }else{
		valor = 'E';
		return valor;
    }
}
int validacionFactorial (float numero)
{
  int resultado;
  int factorial;
  resultado = numero - (int) numero;
  if (resultado == 0 && numero>=0)
    {
           if (numero == 0)
    	{
    		factorial = 1;
    	}else{
    		factorial= numero* validacionFactorial(numero - 1);
    	}
    	return factorial;
    }
  else
    {
      return 0;
    }
}



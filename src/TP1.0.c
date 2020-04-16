/*
 ============================================================================
 Name        : 0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {

	const char ERROR = 'E';
	const char VALIDO = 'V';
	char valor = VALIDO;
	char valor1 = VALIDO;
	char valor2 = VALIDO;

	float num;
	float num1;
	float resultadoS;
	float resultadoR;
	float resultadoM;
	float resultadoD;
	int resultadoA;
	int resultadoB;
	float resultado;
	float resultado1;
	int opcion;







do{

	printf("\n\nBIENVENIDO AL MENU DE OPCIONES \n");
	printf("  Seleccione una opción  \n");

	printf("1) Ingresar 1er valor (A= %.2f ) \n", num);
	printf("2) Ingresar 2do valor (B= %.2f ) \n", num1);
	printf("3) Calcular todas las operaciones. \n");
	printf("\n 		a) Calcular la suma (A+B)");
	printf("\n		b) Calcular la resta (A-B)");
	printf("\n 		c) Calcular la division (A/B)");
	printf("\n		d) Calcular la multiplicacion (A*B)");
	printf("\n 		e) Calcular el factorial (A!)");
	printf("\n4) Informar resultados \n");
	printf("5) Salir\n\n");

	fflush(stdin);
	scanf("%d", &opcionElegida);

	while(opcionElegida<1 || opcionElegida>5){
		printf("ERROR! Eso no es una opción, reingrese opción");
		fflush(stdin);
		scanf("%d", &opcionElegida);
	}

	switch(opcionElegida){
	case 1:
		num = numero();


		break;

	case 2:
		num1 = numero();

		break;

	case 3:
		printf("Se ha realizado todas las operaciones. si desa conocer el resultado elija la opcion 4.");

		resultadoS=suma(num, num1);
			resultadoR=resta(num, num1);
			resultadoM=multiplicacion(num, num1);
			if(num1!=0){
			resultadoD=division(num, num1);
			}else{
				valor = ERROR;
			}
			resultado = num - (int)num;
			resultado1 = num1 - (int)num1;

			if(resultado ==0)
				{
				resultadoA = factorialA(num);
			}else{
				valor1 = ERROR;
			}

			if(resultado1 ==0)
				{
				resultadoB = factorialA(num1);
			}else{
				valor2 = ERROR;
			}
		break;

	case 4:
		printf("El resultado de  a + b es: %.2f\n", resultadoS);
			printf("el resultado de  a - b es: %.2f\n", resultadoR);
			printf("La multiplicacion es: %.2f\n", resultadoM);
			if(valor == ERROR){
				printf("No se puede realizar la operacion, porque no se puede dividir por 0.\n");
			}
			else
			{
			printf("La division es: %.2f\n", resultadoD);
			}

			if(valor1== ERROR){
				printf("No se puede sacar factorial, ya que es un número flotante \n");
			}else{
			printf("e)	El factorial de A es: %d\n ", resultadoA);
			}
			fflush(stdin);
			if(valor2 == ERROR){
				printf("No se puede sacar factorial, ya que es un número flotante \n");
			}else
			{
			printf("	El factorial de B es: %d\n",resultadoB);
			}
		break;

	case 5:
		printf("Para salir presione 5\n\n");
		scanf("%d", &opcionElegida);
		break;

	default:
		printf("Opcion Inválida.\n");
		break;
	}

}while(opcionElegida != 5);
	return 0;
}






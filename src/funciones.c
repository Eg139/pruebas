#include <stdio.h>
#include <stdlib.h>

float numero(void){
	float conseguirNumero;
	printf("Ingrese un numero: ");
	scanf("%f", &conseguirNumero);
	return conseguirNumero;
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
      return -1;
    }
}

void menu(float num, float num1){
    float resultadoS;
	float resultadoR;
	float resultadoM;
	float resultadoD;
    int factorialA;
    int factorialB;
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
	scanf("%d", &opcion);
	while(opcion<1 || opcion>5){
		printf("ERROR! Eso no es una opción, reingrese opción");
		fflush(stdin);
		scanf("%d", &opcion);
	}
	switch(opcion){
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
        	resultadoD = validacionDivision(num, num1);
        	factorialA = validacionFactorial(num);
            factorialB = validacionFactorial (num1);
            fflush (stdin);
            getchar ();
		break;
	case 4:
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
		if (factorialA == 'E')
    	    {
    	      printf ("\nEl factorial de A es %d \n", factorialA);
    	    }
    	        else
    	    {
    	      printf("\nNo se puede calcular el factorial de un numero con coma o negativo.");
    	    }
	    if (factorialB !=-1)
	        {
    	      printf ("\nEl factorial de B es %d \n", factorialB);
    	    }
        	  else
    	    {
    	      printf("\nNo se puede calcular el factorial de un numero con coma o negativo.");
    	    }
	  getchar ();
	  break;
	case 5:
		printf("Para salir presione 5\n\n");
		scanf("%d", &opcion);
		break;
	default:
		printf("Opcion Inválida.\n");
		break;
	}
}while(opcion != 5);
}

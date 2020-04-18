#include <stdio.h>
#include <stdlib.h>

/** \brief pide que el usuario ingrese numeros
 * \return float retorna los numeros ingresados por el usuario
 */
float numero();

/** \brief realiza la suma de los numeros
 *
 * \param num float numero ingresado por el usuario
 * \param num1 float numero ingresado por el usuario
 * \return float devuelve el resultado de num + num1
 *
 */
float suma(float num,float num1);

/** \brief Realiza la resta de los numeros
 *
 * \param num float numero ingresado por el usuario
 * \param num1 float numero ingresado por el usuario
 * \return float devuelve el resultado de num - num1
 *
 */
float resta(float num,float num1);


/** \brief Realiza la multiplicacion de los numeros
 *
 * \param num float numero ingresado por el usuario
 * \param num1 float numero ingresado por el usuario
 * \return float devuelve el resultado de num * num1
 *
 */
float multiplicacion(float num,float num1);

/** \brief verifica que los numeros ingresados sean enteros y >=0, si es negativo o flotante no se puede ejecutar el factorial
 * \param numero float si los numeros son validos, realiza el factorial del numero
 * \return int devuelve el resultado del factorial del numero ingresado o un mensaje de error dependiendo de la validacion
 *
 */
int validacionFactorial(float numero);


/** \brief verifica que el divisor(num1) sea distinto de 0,si es asi realiza la division
 * \param num float numero ingresado por el usuario
 * \param num1 float numero ingresado por el usuario
 * \return int devuelve el resultado de num / num1
 *
 */
float validacionDivision (float num, float num1);

/** \brief muestra el menu de opciones de la calculadora y permite interaciar con las mismas
 * \param num float numero ingresado por el usuario
 * \param num1 float numero ingresado por el usuario
 * \return void no retorna nada
 */
void menu(float num, float num1);


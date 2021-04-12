/*
 * Operaciones.c
 *
 *  Created on: 26 mar. 2021
 *      Author: CABRERA VIDAL EVELYN
 */

#include <stdio.h>
#include "Operaciones.h"

float suma(float primerNumeroIngresado, float segundoNumeroIngresado)
{

	int suma;
	suma = primerNumeroIngresado + segundoNumeroIngresado;



return suma;

}

float resta(float primerNumeroIngresado, float segundoNumeroIngresado)
{
	int resta;

	resta = primerNumeroIngresado - segundoNumeroIngresado;


return 	resta;

}

float division(float primerNumeroIngresado, float segundoNumeroIngresado)
{
	float division;


    division = primerNumeroIngresado / segundoNumeroIngresado;


return 	division;

}

float multiplicacion(float primerNumeroIngresado, float segundoNumeroIngresado)
{

	float multiplicacion;

	multiplicacion = primerNumeroIngresado * segundoNumeroIngresado;


	return 	multiplicacion;
}

float factorialA(float primerNumeroIngresado)
{

	   int i;
	   int acumuladorFac;

	   acumuladorFac=1;

	  for(i=1;i<=primerNumeroIngresado;i++)
	  {
	      acumuladorFac = acumuladorFac * i;

	  }

	  return acumuladorFac;

}


float factorialB(float segundoNumeroIngresado)

{

	  int i;
	  int acumuladorFac2;

	  acumuladorFac2=1;

	  for(i=1;i<=segundoNumeroIngresado;i++)
	  {
		acumuladorFac2 = acumuladorFac2 * i;

	  }

	  return acumuladorFac2;

}



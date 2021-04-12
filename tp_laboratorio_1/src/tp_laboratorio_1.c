/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : CABRERA VIDAL EVELYN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"


int main(void) {

	int opcion;

	float primerNumeroIngresado;
	float segundoNumeroIngresado;

	float resultadoDeSuma;
	float resultadoDeResta;
	float resultadoDeDivision;
	float resultadoDeMultiplicacion;
	float resultadoDeFactoralA;
	float resultadoDeFactoralB;

	int contadorNumeroUno;
	int contadorNumeroDos;

	int contadorCasoDos;
	int contadorCasoTres;
	int contadorCasoCuatro;


	contadorNumeroUno=1;
	contadorNumeroDos=1;

	contadorCasoDos=0;
	contadorCasoTres=0;
	contadorCasoCuatro=0;

	 setbuf(stdout, NULL);

	do
	{
		if(contadorNumeroUno==1)
		{
		printf("1. Ingrese el primer operador (A=x): \n");
		}
		else
		{
		printf("1. Ingrese el primer operador (A= %1.f): \n", primerNumeroIngresado);
		}
		if(contadorNumeroDos==1)
		{
		printf("2. Ingrese el segundo operador (B=y): \n");
		}
		else
		{
		printf("2. Ingrese el segundo operador (B= %1.f): \n",segundoNumeroIngresado);
		}
		printf("3. Se ejecutaran las siguientes operaciones; \n"
				"a) Calcular la suma (A+B) \n"
				"b) Calcular la resta (A-B)\n"
				"c) Calcular la division (A/B)\n"
				"d) Calcular la multiplicacion (A*B)\n"
				"e) Calcular el factorial (A!) \n");
		printf("4. Mostrar el resultado de las operaciones.\n");
		printf("5. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("El primer operador sera: ");
				scanf("%f", &primerNumeroIngresado);

				contadorNumeroUno=0;

				contadorCasoDos++;

			break;
			case 2:
				if(contadorCasoDos==0)
				{
					printf("Si no ingresa el primer operador, no se ejecutara esta opcion.\n");
				}
				else
				{
				printf("El segundo operador sera: ");
				scanf("%f", &segundoNumeroIngresado);

				contadorNumeroDos=0;

				contadorCasoTres++;
				}
			break;
			case 3:
				if(contadorCasoTres==0)
				{
					printf("Error, si no  ingresas ambos operadores no se ejecuta. \n");
				}
				else
				{
				resultadoDeSuma=suma(primerNumeroIngresado, segundoNumeroIngresado);
				resultadoDeResta=resta(primerNumeroIngresado,segundoNumeroIngresado);
				resultadoDeDivision=division(primerNumeroIngresado, segundoNumeroIngresado);
				resultadoDeMultiplicacion=multiplicacion(primerNumeroIngresado, segundoNumeroIngresado);
				resultadoDeFactoralA=factorialA(primerNumeroIngresado);
				resultadoDeFactoralB=factorialB(segundoNumeroIngresado);

				contadorCasoCuatro++;
				}

			break;
			case 4:
				if(contadorCasoCuatro==0)
				{
					printf("Si no ingresas a la tercera opcion, no se mostrara el resultado. \n");
				}
				else
				{
				printf("El resultado de A+B es: %.1f \n",resultadoDeSuma);
				printf("El resultado de A-B es: %.1f \n",resultadoDeResta);

				if(primerNumeroIngresado != 0 || segundoNumeroIngresado != 0)
				{
				    printf("El resultado de A/B es: %.2f \n", resultadoDeDivision);
				}
				else
				{
					printf("No es posible dividir por cero");
				}

				printf("El resultado de A*B es: %.1f \n",resultadoDeMultiplicacion);

				if(primerNumeroIngresado < 0 || segundoNumeroIngresado < 0)
				{
					printf("el factorial, tanto, el primero como el segundo operador da 1 de resultado");
				}
				else
				{
					if(primerNumeroIngresado == 0 || segundoNumeroIngresado == 0)
					{
						printf("No se puede sacar el factorial del numero 0, no cumple la norma, pero da resultado 1");
					}
					else
					{
						if(primerNumeroIngresado < 0)
						{
						printf("El factorial de A es: 1, no cumple con la norma, y  el factorial de B es: %.1f \n",resultadoDeFactoralB);
						}
						else
						{
							if(segundoNumeroIngresado < 0)
							{
								printf("El factorial de A es: %.1f y  el factorial de B es: 1 , no cumple con la norma \n",resultadoDeFactoralA);
							}
							else
							{
								if(primerNumeroIngresado == 0)
								{
									printf("El factorial de A es: 1, por error ya que no cumple la norma y  el factorial de B es: %.1f  \n",resultadoDeFactoralB);
								}
								else
								{
									if(segundoNumeroIngresado == 0)
									{
										printf("El factorial de A es: %.1f, por error ya que no cumple la norma y  el factorial de B es: 1, por error ya que no cumple la norma \n",resultadoDeFactoralA);
									}
									else
									{
										printf("El factorial de A es: %.1f el factorial de B es:  %.1f \n",resultadoDeFactoralA, resultadoDeFactoralB);

									}
								}
							}
						}
					}
				}
				}

			break;
			case 5:
				printf("Haz salido de la calcuadora.\n");
				break;
			default:
				printf("No existe esta opcion, por favor elija las opciones que les aparece.\n");
				break;
		}




	}while(opcion!=5);

	return EXIT_SUCCESS;
}


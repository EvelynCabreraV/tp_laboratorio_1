/*
 * Operaciones.h
 *
 *  Created on: 26 mar. 2021
 *      Author: CABRERA VIDAL EVELYN
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/**
 * @fn float suma(float, float)
 * @brief Calcula la suma del operador A y operador B
 *
 * @param float primerNumeroIngresado
 * @param float segundoNumeroIngresado
 * @return float Devuelve el resultado de la suma
 */
float suma(float, float);
/**
 * @fn float resta(float, float)
 * @brief Calcula la resta del operador A y operador B
 *
 * @param float primerNumeroIngresado
 * @param float segundoNumeroIngresado
 * @return float Devuelve el resultado de la resta
 */
float resta(float, float);
/**
 * @fn float division(float, float)
 * @brief Calcula la division del operador A y operador B
 *
 * @param float primerNumeroIngresado
 * @param float segundoNumeroIngresado
 * @return float Devuelve el resultado de la divison, en el caso de que operador A o operador B sea 0, devuelve “No es posible dividir por cero”
 */
float division(float, float);
/**
 * @fn float multiplicacion(float, float)
 * @brief Calcula la multiplicacion del operador A y operador B
 *
 * @param float primerNumeroIngresado
 * @param float segundoNumeroIngresado
 * @return float Devuelve el resultado de la multiplicacion
 */
float multiplicacion(float, float);
/**
 * @fn float factorialA(float)
 * @brief calcula el factorial del operador A
 *
 * @param float primerNumeroIngresado
 * @return float Devuelve todos los números enteros y positivos que hay entre el número del operador A y el número 1.
 */
float factorialA(float);
/**
 * @fn float factorialB(float)
 * @brief calcula el factorial del operador B
 *
 * @param float segundoNumeroIngresado
 * @return float Devuelve todos los números enteros y positivos que hay entre el número del operador B y el número 1.
 */
float factorialB(float);




#endif /* OPERACIONES_H_ */

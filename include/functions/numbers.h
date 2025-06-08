/**
 * @file numbers.h
 * @brief Biblioteca de funciones utilitarias para manipulación numérica básica
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones auxiliares para el manejo de valores numéricos,
 * incluyendo operaciones como extracción de dígitos, conteo de dígitos y comparaciones
 * de enteros y números de punto flotante. Está diseñada para complementar rutinas de
 * validación, formateo y procesamiento de datos numéricos.
 */

#ifndef NUMBERS_H
#define NUMBERS_H

/**
 * @brief Obtiene el i-ésimo dígito de un número
 * @param n Número del cual extraer el dígito
 * @param i Posición del dígito (0 = unidades)
 * @return Dígito en la posición especificada
 */
int getDigit(int n, int i);

/**
 * @brief Cuenta la cantidad de dígitos en un número
 * @param n Número a analizar
 * @return Cantidad de dígitos
 */
int digitCount(int n);

/**
 * @brief Compara dos enteros
 * @param a Primer entero
 * @param b Segundo entero
 * @return Diferencia entre a y b
 */
int cmpInt(int a, int b);

/**
 * @brief Compara dos doubles
 * @param a Primer double
 * @param b Segundo double
 * @return Diferencia entre a y b
 */
int cmpDouble(double a, double b);

#endif //NUMBERS_H

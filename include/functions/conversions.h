/**
* @file conversions.h
 * @brief Biblioteca de funciones para conversión entre tipos básicos y cadenas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca ofrece un conjunto de funciones para convertir entre caracteres,
 * cadenas de texto, enteros y números de punto flotante, incluyendo soporte para
 * conversiones en diferentes bases numéricas. Facilita la manipulación y transformación
 * de datos entre distintos formatos comunes en programación.
 */

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <string>

/**
 * @brief Convierte un carácter a su valor numérico
 * @param c Carácter a convertir
 * @return Valor numérico del carácter
 */
int charToInt(char c);

/**
 * @brief Convierte un valor numérico a carácter
 * @param i Valor numérico a convertir
 * @return Carácter correspondiente al valor
 */
char intToChar(int i);

/**
 * @brief Convierte un entero a cadena
 * @param i Entero a convertir
 * @return Representación en cadena del entero
 */
std::string intToString(int i);

/**
 * @brief Convierte una cadena a entero en base específica
 * @param s Cadena a convertir
 * @param b Base numérica
 * @return Valor entero de la cadena
 */
int stringToInt(const std::string &s, int b);

/**
 * @brief Convierte una cadena a entero en base decimal
 * @param s Cadena a convertir
 * @return Valor entero de la cadena
 */
int stringToInt(const std::string &s);

/**
 * @brief Convierte un carácter a cadena
 * @param c Carácter a convertir
 * @return Cadena con el carácter
 */
std::string charToString(char c);

/**
 * @brief Convierte una cadena a carácter (primer carácter)
 * @param s Cadena a convertir
 * @return Primer carácter de la cadena
 */
char stringToChar(const std::string &s);

/**
 * @brief Retorna una copia de la cadena
 * @param s Cadena original
 * @return Copia de la cadena
 */
std::string stringToString(const std::string &s);

/**
 * @brief Convierte un double a cadena
 * @param d Double a convertir
 * @return Representación en cadena del double
 */
std::string doubleToString(double d);

/**
 * @brief Convierte una cadena a double
 * @param s Cadena a convertir
 * @return Valor double de la cadena
 */
double stringToDouble(const std::string &s);

#endif //CONVERSIONS_H

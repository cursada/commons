/**
* @file validations.h
 * @brief Biblioteca de funciones para validación y transformación de caracteres
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca contiene funciones utilitarias para verificar propiedades
 * de caracteres y realizar conversiones básicas como pasar de minúsculas
 * a mayúsculas y viceversa. Está diseñada para complementar el procesamiento
 * de texto y facilitar tareas comunes de validación y manipulación de caracteres.
 */

#ifndef VALIDATIONS_H
#define VALIDATIONS_H


/**
 * @brief Verifica si un carácter es un dígito
 * @param c Carácter a verificar
 * @return true si es dígito, false en caso contrario
 */
bool isDigit(char c);

/**
 * @brief Verifica si un carácter es una letra
 * @param c Carácter a verificar
 * @return true si es letra, false en caso contrario
 */
bool isLetter(char c);

/**
 * @brief Verifica si un carácter es mayúscula
 * @param c Carácter a verificar
 * @return true si es mayúscula, false en caso contrario
 */
bool isUpperCase(char c);

/**
 * @brief Verifica si un carácter es minúscula
 * @param c Carácter a verificar
 * @return true si es minúscula, false en caso contrario
 */
bool isLowerCase(char c);

/**
 * @brief Convierte un carácter a mayúscula
 * @param c Carácter a convertir
 * @return Carácter en mayúscula
 */
char toUpperCase(char c);

/**
 * @brief Convierte un carácter a minúscula
 * @param c Carácter a convertir
 * @return Carácter en minúscula
 */
char toLowerCase(char c);

#endif //VALIDATIONS_H

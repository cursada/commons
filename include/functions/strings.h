/**
* @file strings.h
* @brief Biblioteca de funciones para manipulación de cadenas de caracteres
* @author Lucas Schvartzman
* @version 1.0.0
* @date 2023
*
* Esta biblioteca proporciona un conjunto completo de funciones para el manejo
* y manipulación de cadenas de caracteres en C++, incluyendo operaciones de
* búsqueda, conversión, validación y formateo.
*/

#ifndef STRINGS_H
#define STRINGS_H

#include <string>
#include <iostream>

/**
 * @brief Calcula la longitud de una cadena de caracteres
 * @param s Cadena de entrada
 * @return Número de caracteres en la cadena (sin incluir el terminador nulo)
 *
 * @note Esta función implementa manualmente el cálculo de longitud sin usar strlen()
 */
int length(const std::string &s);

/**
 * @brief Cuenta cuántas veces aparece un carácter específico en una cadena
 * @param s Cadena donde buscar
 * @param c Carácter a contar
 * @return Número de ocurrencias del carácter en la cadena
 */
int charCount(const std::string &s, char c);

/**
 * @brief Extrae una subcadena desde una posición inicial hasta una final (exclusiva)
 * @param s Cadena original
 * @param d Posición inicial (inclusiva)
 * @param h Posición final (exclusiva)
 * @return Subcadena extraída
 *
 * @warning No verifica límites. Asegúrese de que d < h y ambos estén dentro del rango válido
 */
std::string substring(const std::string &s, int d, int h);

/**
 * @brief Extrae una subcadena desde una posición hasta el final
 * @param s Cadena original
 * @param d Posición inicial (inclusiva)
 * @return Subcadena desde la posición d hasta el final
 */
std::string substring(const std::string &s, int d);

/**
 * @brief Busca la primera ocurrencia de un carácter en una cadena
 * @param s Cadena donde buscar
 * @param c Carácter a buscar
 * @return Posición del carácter o -1 si no se encuentra
 */
int indexOf(const std::string &s, char c);

/**
 * @brief Busca la primera ocurrencia de un carácter desde una posición específica
 * @param s Cadena donde buscar
 * @param c Carácter a buscar
 * @param offSet Posición inicial de búsqueda
 * @return Posición del carácter o -1 si no se encuentra
 */
int indexOf(const std::string &s, char c, int offSet);

/**
 * @brief Busca la primera ocurrencia de una subcadena
 * @param s Cadena donde buscar
 * @param toSearch Subcadena a buscar
 * @return Posición de la subcadena o -1 si no se encuentra
 */
int indexOf(const std::string &s, const std::string &toSearch);

/**
 * @brief Busca una subcadena desde una posición específica
 * @param s Cadena donde buscar
 * @param toSearch Subcadena a buscar
 * @param offset Posición inicial de búsqueda
 * @return Posición de la subcadena o -1 si no se encuentra
 */
int indexOf(const std::string &s, const std::string &toSearch, int offset);

/**
 * @brief Busca la última ocurrencia de un carácter
 * @param s Cadena donde buscar
 * @param c Carácter a buscar
 * @return Posición del carácter o -1 si no se encuentra
 */
int lastIndexOf(const std::string &s, char c);

/**
 * @brief Busca la n-ésima ocurrencia de un carácter
 * @param s Cadena donde buscar
 * @param c Carácter a buscar
 * @param n Número de ocurrencia a buscar
 * @return Posición de la n-ésima ocurrencia o -1 si no existe
 */
int indexOfN(const std::string &s, char c, int n);

/**
 * @brief Verifica si una cadena está vacía
 * @param s Cadena a verificar
 * @return true si la cadena está vacía, false en caso contrario
 */
bool isEmpty(const std::string &s);

/**
 * @brief Verifica si una cadena comienza con otra cadena
 * @param s Cadena principal
 * @param x Prefijo a verificar
 * @return true si s comienza con x, false en caso contrario
 */
bool startsWith(const std::string &s, const std::string &x);

/**
 * @brief Verifica si una cadena termina con otra cadena
 * @param s Cadena principal
 * @param x Sufijo a verificar
 * @return true si s termina con x, false en caso contrario
 */
bool endsWith(const std::string &s, const std::string &x);

/**
 * @brief Verifica si una cadena contiene un carácter específico
 * @param s Cadena donde buscar
 * @param c Carácter a buscar
 * @return true si el carácter está presente, false en caso contrario
 */
bool contains(const std::string &s, char c);

/**
 * @brief Reemplaza todas las ocurrencias de un carácter por otro
 * @param s Cadena original
 * @param oldChar Carácter a reemplazar
 * @param newChar Carácter de reemplazo
 * @return Nueva cadena con los reemplazos realizados
 */
std::string replace(std::string s, char oldChar, char newChar);

/**
 * @brief Inserta un carácter en una posición específica
 * @param s Cadena original
 * @param pos Posición donde insertar
 * @param c Carácter a insertar
 * @return Nueva cadena con el carácter insertado
 */
std::string insertAt(const std::string &s, int pos, char c);

/**
 * @brief Remueve el carácter en una posición específica
 * @param s Cadena original
 * @param pos Posición del carácter a remover
 * @return Nueva cadena sin el carácter especificado
 */
std::string removeAt(const std::string &s, int pos);

/**
 * @brief Remueve espacios en blanco al inicio de la cadena
 * @param s Cadena original
 * @return Cadena sin espacios al inicio
 */
std::string ltrim(std::string s);

/**
 * @brief Remueve espacios en blanco al final de la cadena
 * @param s Cadena original
 * @return Cadena sin espacios al final
 */
std::string rtrim(std::string s);

/**
 * @brief Remueve espacios en blanco al inicio y final de la cadena
 * @param s Cadena original
 * @return Cadena sin espacios al inicio y final
 */
std::string trim(std::string s);

/**
 * @brief Replica un carácter n veces
 * @param c Carácter a replicar
 * @param n Número de repeticiones
 * @return Cadena con el carácter replicado
 */
std::string replicate(char c, int n);

/**
 * @brief Crea una cadena de espacios
 * @param n Número de espacios
 * @return Cadena con n espacios
 */
std::string spaces(int n);

/**
 * @brief Rellena una cadena con caracteres a la izquierda hasta alcanzar una longitud
 * @param s Cadena original
 * @param n Longitud deseada
 * @param c Carácter de relleno
 * @return Cadena rellenada a la izquierda
 */
std::string lpad(const std::string &s, int n, char c);

/**
 * @brief Rellena una cadena con caracteres a la derecha hasta alcanzar una longitud
 * @param s Cadena original
 * @param n Longitud deseada
 * @param c Carácter de relleno
 * @return Cadena rellenada a la derecha
 */
std::string rpad(const std::string &s, int n, char c);

/**
 * @brief Rellena una cadena con caracteres al centro hasta alcanzar una longitud
 * @param s Cadena original
 * @param n Longitud deseada
 * @param c Carácter de relleno
 * @return Cadena centrada con relleno
 */
std::string cpad(const std::string &s, int n, char c);

/**
 * @brief Convierte una cadena a mayúsculas
 * @param s Cadena original
 * @return Cadena en mayúsculas
 */
std::string toUpperCase(std::string s);

/**
 * @brief Convierte una cadena a minúsculas
 * @param s Cadena original
 * @return Cadena en minúsculas
 */
std::string toLowerCase(std::string s);

/**
 * @brief Compara dos cadenas lexicográficamente
 * @param a Primera cadena
 * @param b Segunda cadena
 * @return -1 si a < b, 0 si a == b, 1 si a > b
 */
int cmpString(const std::string &a, const std::string &b);

/**
 * @brief Obtiene el carácter en una posición específica
 * @param s Cadena original
 * @param pos Posición del carácter
 * @return Carácter en la posición especificada
 */
char getCharAt(const std::string &s, int pos);

#endif //STRINGS_H

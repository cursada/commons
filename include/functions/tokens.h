/**
* @file tokens.h
 * @brief Biblioteca de funciones para manipulación de tokens en strings
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de cadenas tokenizadas,
 * permitiendo agregar, remover, buscar y modificar tokens separados por un
 * carácter delimitador. Útil para procesamiento de datos estructurados en texto.
 */

#ifndef TOKENS_H
#define TOKENS_H

#include <string>

/**
 * @brief Cuenta la cantidad de tokens en una cadena tokenizada
 * @param s Cadena tokenizada
 * @param sep Carácter separador
 * @return Cantidad de tokens
 */
int tokenCount(std::string s, char sep);

/**
 * @brief Añade un token a una cadena tokenizada
 * @param s Referencia a la cadena tokenizada
 * @param sep Carácter separador
 * @param t Token a añadir
 */
void addToken(std::string &s, char sep, const std::string &t);

/**
 * @brief Devuelve un token de una cadena tokenizada
 * @param s Cadena tokenizada
 * @param sep Carácter separador
 * @param i Índice del token
 * @return Token en la posición especificada
 */
std::string getTokenAt(std::string s, char sep, int i);

/**
 * @brief Remueve un token en una cadena tokenizada
 * @param s Referencia a la cadena tokenizada
 * @param sep Carácter separador
 * @param i Índice del token a remover
 */
void removeTokenAt(std::string &s, char sep, int i);

/**
 * @brief Reemplaza un token en una cadena tokenizada
 * @param s Referencia a la cadena tokenizada
 * @param sep Carácter separador
 * @param t Nuevo token
 * @param i Índice del token a reemplazar
 */
void setTokenAt(std::string &s, char sep, std::string t, int i);

/**
 * @brief Indica el número de token en una cadena tokenizada
 * @param s Cadena tokenizada
 * @param sep Carácter separador
 * @param t Token a buscar
 * @return Índice del token encontrado o -1 si no se encuentra
 */
int findToken(std::string s, char sep, std::string t);

/**
 * @brief Crea una cadena tokenizada vacía con tokens en blanco
 * @param x Cantidad de tokens vacíos a crear
 * @param sep Carácter separador
 * @return Cadena tokenizada con tokens vacíos
 */
std::string emptyTString(int x, char sep);

#endif //TOKENS_H

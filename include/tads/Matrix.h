/**
 * @file Matrix.h
 * @brief Biblioteca de funciones para manipulación de matrices con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de matrices bidimensionales
 * utilizando plantillas. Permite crear, acceder y modificar matrices de cualquier tipo
 * usando una estructura basada en colecciones lineales.
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <string>
#include "Coll.h"

/**
 * @brief Estructura que representa una matriz bidimensional
 * @tparam T Tipo de datos que almacena la matriz
 */
template <typename T>
struct Matrix
{
   Coll<T> datos;  ///< Colección que almacena los datos de la matriz
   int f;          ///< Número de filas
   int c;          ///< Número de columnas
};

/**
 * @brief Crea una nueva matriz con dimensiones y valor por defecto especificados
 * @tparam T Tipo de datos de la matriz
 * @param f Número de filas
 * @param c Número de columnas
 * @param valorDefault Valor por defecto para inicializar todos los elementos
 * @param tToString Función para convertir T a std::string
 * @return Nueva matriz inicializada
 */
template <typename T>
Matrix<T> matrix(int f, int c, T valorDefault, std::string tToString(T));

/**
 * @brief Convierte coordenadas bidimensionales a índice unidimensional
 * @tparam T Tipo de datos de la matriz
 * @param m Matriz de referencia
 * @param f Fila
 * @param c Columna
 * @return Índice unidimensional correspondiente
 */
template <typename T>
int coordenadasToInt(Matrix<T> m, int f, int c);

/**
 * @brief Obtiene el elemento en la posición especificada
 * @tparam T Tipo de datos de la matriz
 * @param m Matriz de la cual obtener el elemento
 * @param f Fila del elemento
 * @param c Columna del elemento
 * @param tFromString Función para convertir std::string a T
 * @return Elemento en la posición (f, c)
 */
template <typename T>
T mtxGetAt(Matrix<T> m, int f, int c, T tFromString(std::string));

/**
 * @brief Establece el valor del elemento en la posición especificada
 * @tparam T Tipo de datos de la matriz
 * @param m Referencia a la matriz a modificar
 * @param t Valor a establecer
 * @param f Fila del elemento
 * @param c Columna del elemento
 * @param tToString Función para convertir T a std::string
 */
template <typename T>
void mtxSetAt(Matrix<T>& m, T t, int f, int c, std::string tToString(T));

#endif //MATRIX_H
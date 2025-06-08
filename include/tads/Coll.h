/**
 * @file Coll.h
 * @brief Biblioteca de colecciones basadas en strings con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona una estructura de datos Coll que almacena elementos
 * de cualquier tipo como tokens separados por un delimitador en un std::string.
 * Incluye funciones para inserción, eliminación, búsqueda, ordenamiento e iteración.
 */

#ifndef COLL_H
#define COLL_H

#include <iostream>

/**
 * @brief Estructura de colección basada en std::string con separadores
 * @tparam T Tipo de datos a almacenar
 */
template<typename T>
struct Coll
{
   std::string s;   ///< String que contiene todos los elementos separados
   char sep;   ///< Carácter separador entre elementos
   int pos;    ///< Posición actual para iteración
};

/**
 * @brief Crea una nueva colección con separador especificado
 * @tparam T Tipo de datos de la colección
 * @param sep Carácter separador a utilizar
 * @return Colección inicializada
 */
template<typename T>
Coll<T> coll(char sep);

/**
 * @brief Crea una nueva colección con separador por defecto ('|')
 * @tparam T Tipo de datos de la colección
 * @return Colección inicializada con separador '|'
 */
template<typename T>
Coll<T> coll();

/**
 * @brief Retorna el número de elementos en la colección
 * @tparam T Tipo de datos de la colección
 * @param c Colección a consultar
 * @return Cantidad de elementos
 */
template<typename T>
int collSize(Coll<T> c);

/**
 * @brief Remueve todos los elementos de la colección
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 */
template<typename T>
void collRemoveAll(Coll<T>& c);

/**
 * @brief Remueve el elemento en la posición especificada
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param p Posición del elemento a remover
 */
template<typename T>
void collRemoveAt(Coll<T>& c, int p);

/**
 * @brief Agrega un elemento al final de la colección
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param t Elemento a agregar
 * @param tToString Función para convertir T a std::string
 * @return Índice del elemento agregado
 */
template<typename T>
int collAdd(Coll<T>& c, T t, std::string tToString(T));

/**
 * @brief Establece el valor de un elemento en la posición especificada
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param t Nuevo valor del elemento
 * @param p Posición del elemento
 * @param tToString Función para convertir T a std::string
 */
template<typename T>
void collSetAt(Coll<T>& c, T t, int p, std::string tToString(T));

/**
 * @brief Obtiene el elemento en la posición especificada
 * @tparam T Tipo de datos de la colección
 * @param c Colección de la cual obtener el elemento
 * @param p Posición del elemento
 * @param tFromString Función para convertir std::string a T
 * @return Elemento en la posición especificada
 */
template<typename T>
T collGetAt(Coll<T> c, int p, T tFromString(std::string));

/**
 * @brief Busca un elemento en la colección usando una función de comparación
 * @tparam T Tipo de datos de la colección
 * @tparam K Tipo de la clave de búsqueda
 * @param c Colección en la cual buscar
 * @param k Clave a buscar
 * @param cmpTK Función de comparación entre T y K
 * @param tFromString Función para convertir std::string a T
 * @return Índice del elemento encontrado o -1 si no se encuentra
 */
template<typename T, typename K>
int collFind(Coll<T> c, K k, int cmpTK(T, K), T tFromString(std::string));

/**
 * @brief Ordena la colección usando una función de comparación
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param cmpTT Función de comparación entre elementos T
 * @param tFromString Función para convertir std::string a T
 * @param tToString Función para convertir T a std::string
 */
template<typename T>
void collSort(Coll<T>& c, int cmpTT(T, T), T tFromString(std::string), std::string tToString(T));

/**
 * @brief Verifica si hay más elementos para iterar
 * @tparam T Tipo de datos de la colección
 * @param c Colección a verificar
 * @return true si hay más elementos, false en caso contrario
 */
template<typename T>
bool collHasNext(Coll<T> c);

/**
 * @brief Obtiene el siguiente elemento en la iteración
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param tFromString Función para convertir std::string a T
 * @return Siguiente elemento
 */
template<typename T>
T collNext(Coll<T>& c, T tFromString(std::string));

/**
 * @brief Obtiene el siguiente elemento con indicador de fin de colección
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 * @param endOfColl Referencia a booleano que indica si quedan más elementos
 * @param tFromString Función para convertir std::string a T
 * @return Siguiente elemento
 */
template<typename T>
T collNext(Coll<T>& c, bool& endOfColl, T tFromString(std::string));

/**
 * @brief Reinicia el iterador de la colección al inicio
 * @tparam T Tipo de datos de la colección
 * @param c Referencia a la colección
 */
template<typename T>
void collReset(Coll<T>& c);

/**
 * @brief Convierte la colección a su representación std::string
 * @tparam T Tipo de datos de la colección
 * @param c Colección a convertir
 * @return String que representa la colección
 */
template<typename T>
std::string collToString(Coll<T> c);

#endif //COLL_H
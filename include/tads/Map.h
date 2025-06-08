/**
 * @file Map.h
 * @brief Biblioteca de funciones para manipulación de mapas clave-valor con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de mapas (diccionarios) que
 * asocian claves con valores utilizando plantillas. Incluye funciones para inserción,
 * búsqueda, eliminación, iteración y ordenamiento de pares clave-valor.
 */

#ifndef MAP_H
#define MAP_H

#include <iostream>
#include "Array.h"

/**
 * @brief Estructura que representa un mapa clave-valor
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 */
template<typename K, typename V>
struct Map
{
   Array<K> keys;    ///< Array que almacena las claves
   Array<V> values;  ///< Array que almacena los valores
   int posK;         ///< Posición actual del iterador de claves
   int posV;         ///< Posición actual del iterador de valores
};

/**
 * @brief Crea un nuevo mapa vacío
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @return Nuevo mapa inicializado
 */
template<typename K, typename V>
Map<K,V> map();

/**
 * @brief Función de comparación genérica para tipos
 * @tparam T Tipo de datos a comparar
 * @param a Primer elemento
 * @param b Segundo elemento
 * @return -1 si a < b, 1 si a > b, 0 si son iguales
 */
template<typename T>
int cmpTT(T a, T b);

/**
 * @brief Obtiene el valor asociado a una clave
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Mapa en el que buscar
 * @param k Clave a buscar
 * @return Puntero al valor si existe, NULL si no existe
 */
template<typename K, typename V>
V* mapGet(Map<K,V> m, K k);

/**
 * @brief Inserta o actualiza un par clave-valor en el mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a modificar
 * @param k Clave a insertar/actualizar
 * @param v Valor a asociar con la clave
 * @return Puntero al valor insertado/actualizado
 */
template<typename K, typename V>
V* mapPut(Map<K,V>& m, K k, V v);

/**
 * @brief Verifica si el mapa contiene una clave específica
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Mapa en el que buscar
 * @param k Clave a verificar
 * @return true si la clave existe, false en caso contrario
 */
template<typename K, typename V>
bool mapContains(Map<K,V> m, K k);

/**
 * @brief Elimina un par clave-valor del mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a modificar
 * @param k Clave del elemento a eliminar
 * @return Valor del elemento eliminado
 */
template<typename K, typename V>
V mapRemove(Map<K,V>& m, K k);

/**
 * @brief Elimina todos los elementos del mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a vaciar
 */
template<typename K, typename V>
void mapRemoveAll(Map<K,V>& m);

/**
 * @brief Retorna el número de elementos en el mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Mapa del cual obtener el tamaño
 * @return Número de elementos en el mapa
 */
template<typename K, typename V>
int mapSize(Map<K,V> m);

/**
 * @brief Verifica si hay más elementos para iterar
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Mapa a verificar
 * @return true si hay más elementos, false en caso contrario
 */
template<typename K, typename V>
bool mapHasNext(Map<K,V> m);

/**
 * @brief Obtiene la siguiente clave en la iteración
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a iterar
 * @return Siguiente clave en la iteración
 */
template<typename K, typename V>
K mapNextKey(Map<K,V>& m);

/**
 * @brief Obtiene el siguiente valor en la iteración
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a iterar
 * @return Puntero al siguiente valor en la iteración
 */
template<typename K, typename V>
V* mapNextValue(Map<K,V>& m);

/**
 * @brief Reinicia los iteradores del mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a reiniciar
 */
template<typename K, typename V>
void mapReset(Map<K,V>& m);

/**
 * @brief Descubre una clave: la agrega si no existe, o retorna su valor si existe
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a modificar
 * @param k Clave a descubrir
 * @param v Valor por defecto si la clave no existe
 * @return Puntero al valor asociado con la clave
 */
template<typename K, typename V>
V* mapDiscover(Map<K,V>& m, K k, V v);

/**
 * @brief Ordena el mapa por claves usando una función de comparación
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a ordenar
 * @param cmpKK Función de comparación para las claves
 */
template<typename K, typename V>
void mapSortByKeys(Map<K,V>& m, int cmpKK(K,K));

/**
 * @brief Ordena el mapa por valores usando una función de comparación
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Referencia al mapa a ordenar
 * @param cmpVV Función de comparación para los valores
 */
template<typename K, typename V>
void mapSortByValues(Map<K,V>& m, int cmpVV(V,V));

/**
 * @brief Muestra todos los pares clave-valor del mapa
 * @tparam K Tipo de datos de las claves
 * @tparam V Tipo de datos de los valores
 * @param m Mapa a mostrar
 */
template <typename K, typename V>
void mostrarMap(Map<K,V> m);

#endif //MAP_H
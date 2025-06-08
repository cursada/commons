/**
* @file arrays.h
 * @brief Biblioteca de funciones para manipulación de arrays con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de arrays dinámicos
 * con plantillas, incluyendo operaciones básicas como inserción, eliminación,
 * búsqueda y ordenamiento. Diseñada para trabajar con arrays de tamaño variable
 * y operaciones eficientes sobre los mismos.
 */

#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>

/**
 * @brief Agrega un elemento al final del array
 * @param arr Array donde agregar el elemento
 * @param len Referencia a la longitud actual del array
 * @param e Elemento a agregar
 * @return Nueva longitud del array
 */
template<typename T>
int add(T arr[], int &len, T e);

/**
 * @brief Inserta un elemento en una posición específica del array
 * @param arr Array donde insertar el elemento
 * @param len Referencia a la longitud actual del array
 * @param e Elemento a insertar
 * @param p Posición donde insertar
 */
template<typename T>
void insert(T arr[], int &len, T e, int p);

/**
 * @brief Remueve un elemento de una posición específica del array
 * @param arr Array del cual remover el elemento
 * @param len Referencia a la longitud actual del array
 * @param p Posición del elemento a remover
 * @return Elemento removido
 */
template<typename T>
T remove(T arr[], int &len, int p);

/**
 * @brief Busca un elemento en el array
 * @param arr Array donde buscar
 * @param len Longitud del array
 * @param k Clave del elemento a buscar
 * @param cmpTK Función de comparación
 * @return Índice del elemento encontrado o -1 si no se encuentra
 */
template<typename T, typename K>
int find(T arr[], int len, K k, int cmpTK(T, K));

/**
 * @brief Inserta un elemento de forma ordenada en el array
 * @param arr Array donde insertar
 * @param len Referencia a la longitud actual del array
 * @param e Elemento a insertar
 * @param cmpTT Función de comparación
 * @return Posición donde se insertó el elemento
 */
template<typename T>
int orderedInsert(T arr[], int &len, T e, int cmpTT(T, T));

/**
 * @brief Ordena el array usando algoritmo burbuja
 * @param arr Array a ordenar
 * @param len Longitud del array
 * @param cmpTT Función de comparación
 */
template<typename T>
void sort(T arr[], int len, int cmpTT(T, T));

#endif //ARRAYS_H

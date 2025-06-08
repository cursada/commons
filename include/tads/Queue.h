/**
 * @file Queue.h
 * @brief Biblioteca de funciones para manipulación de colas (FIFO) con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de colas (First In, First Out)
 * utilizando plantillas. Implementa una cola basada en lista enlazada con punteros
 * al frente y final para operaciones eficientes de inserción y eliminación.
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "../functions/lists.h"

/**
 * @brief Estructura que representa una cola (queue)
 * @tparam T Tipo de datos que almacena la cola
 */
template<typename T>
struct Queue
{
   Node<T>* p;  ///< Puntero al frente de la cola
   Node<T>* q;  ///< Puntero al final de la cola
   int cant;    ///< Cantidad de elementos en la cola
};

/**
 * @brief Crea una nueva cola vacía
 * @tparam T Tipo de datos de la cola
 * @return Nueva cola inicializada y vacía
 */
template<typename T>
Queue<T> queue();

/**
 * @brief Agrega un elemento al final de la cola
 * @tparam T Tipo de datos de la cola
 * @param q Referencia a la cola a modificar
 * @param e Elemento a agregar
 * @return Puntero al elemento agregado (actualmente retorna NULL)
 */
template<typename T>
T* queueEnqueue(Queue<T>& q, T e);

/**
 * @brief Extrae y retorna el elemento del frente de la cola
 * @tparam T Tipo de datos de la cola
 * @param q Referencia a la cola a modificar
 * @return Elemento extraído del frente de la cola
 */
template<typename T>
T queueDequeue(Queue<T>& q);

/**
 * @brief Verifica si la cola está vacía
 * @tparam T Tipo de datos de la cola
 * @param q Cola a verificar
 * @return true si la cola está vacía, false en caso contrario
 */
template<typename T>
bool queueIsEmpty(Queue<T> q);

/**
 * @brief Retorna la cantidad de elementos en la cola
 * @tparam T Tipo de datos de la cola
 * @param q Cola de la cual obtener el tamaño
 * @return Número de elementos en la cola
 */
template<typename T>
int queueSize(Queue<T> q);

#endif //QUEUE_H
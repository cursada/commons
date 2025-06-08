/**
* @file lists.h
 * @brief Biblioteca de listas enlazadas con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de listas enlazadas
 * con plantillas, incluyendo operaciones básicas como inserción, eliminación,
 * búsqueda y ordenamiento. Diseñada para estructuras de datos dinámicas
 * como listas, pilas y colas.
 */

#ifndef LISTS_H
#define LISTS_H

#include <iostream>


template<typename T>
struct Node {
    T info;
    Node<T> *sig;
};

/**
 * @brief Agrega un elemento al final de la lista
 * @param p Puntero a la lista
 * @param e Elemento a agregar
 * @return Puntero al nodo agregado
 */
template<typename T>
Node<T> *add(Node<T> *&p, T e);

/**
 * @brief Agrega un elemento al inicio de la lista
 * @param p Puntero a la lista
 * @param e Elemento a agregar
 * @return Puntero al nodo agregado
 */
template<typename T>
Node<T> *addFirst(Node<T> *&p, T e);

/**
 * @brief Remueve un elemento de la lista
 * @param p Puntero a la lista
 * @param k Clave del elemento a remover
 * @param cmpTK Función de comparación
 * @return Elemento removido
 */
template<typename T, typename K>
T remove(Node<T> *&p, K k, int cmpTK(T, K));

/**
 * @brief Remueve el primer elemento de la lista
 * @param p Puntero a la lista
 * @return Elemento removido
 */
template<typename T>
T removeFirst(Node<T> *&p);

/**
 * @brief Busca un elemento en la lista
 * @param p Puntero a la lista
 * @param k Clave del elemento a buscar
 * @param cmpTK Función de comparación
 * @return Puntero al nodo encontrado o NULL
 */
template<typename T, typename K>
Node<T> *find(Node<T> *p, K k, int cmpTK(T, K));

/**
 * @brief Inserta un elemento de forma ordenada
 * @param p Puntero a la lista
 * @param e Elemento a insertar
 * @param cmpTT Función de comparación
 * @return Puntero al nodo insertado
 */
template<typename T>
Node<T> *orderedInsert(Node<T> *&p, T e, int cmpTT(T, T));

/**
 * @brief Busca un elemento y lo inserta si no existe
 * @param p Puntero a la lista
 * @param e Elemento a buscar/insertar
 * @param enc Referencia que indica si fue encontrado
 * @param cmpTT Función de comparación
 * @return Puntero al nodo
 */
template<typename T>
Node<T> *searchAndInsert(Node<T> *&p, T e, bool &enc, int cmpTT(T, T));

/**
 * @brief Ordena la lista
 * @param p Puntero a la lista
 * @param cmpTT Función de comparación
 */
template<typename T>
void sort(Node<T> *&p, int cmpTT(T, T));

/**
 * @brief Verifica si la lista está vacía
 * @param p Puntero a la lista
 * @return true si está vacía, false en caso contrario
 */
template<typename T>
bool isEmpty(Node<T> *p);

/**
 * @brief Libera toda la memoria de la lista
 * @param p Puntero a la lista
 */
template<typename T>
void free(Node<T> *&p);

/**
 * @brief Apila un elemento (push para pila)
 * @param p Puntero a la pila
 * @param e Elemento a apilar
 * @return Puntero al nodo apilado
 */
template<typename T>
Node<T> *push(Node<T> *&p, T e);

/**
 * @brief Desapila un elemento (pop para pila)
 * @param p Puntero a la pila
 * @return Elemento desapilado
 */
template<typename T>
T pop(Node<T> *&p);

/**
 * @brief Encola un elemento (versión con dos punteros)
 * @param p Puntero al inicio de la cola
 * @param q Puntero al final de la cola
 * @param e Elemento a encolar
 * @return Puntero al nodo encolado
 */
template<typename T>
Node<T> *enqueue(Node<T> *&p, Node<T> *&q, T e);

/**
 * @brief Encola un elemento (versión circular)
 * @param q Puntero al final de la cola circular
 * @param e Elemento a encolar
 * @return Puntero al nodo encolado
 */
template<typename T>
Node<T> *enqueue(Node<T> *&q, T e);

/**
 * @brief Desencola un elemento (versión con dos punteros)
 * @param p Puntero al inicio de la cola
 * @param q Puntero al final de la cola
 * @return Elemento desencolado
 */
template<typename T>
T dequeue(Node<T> *&p, Node<T> *&q);

/**
 * @brief Desencola un elemento (versión circular)
 * @param q Puntero al final de la cola circular
 * @return Elemento desencolado
 */
template<typename T>
T dequeue(Node<T> *&q);

/**
 * @brief Muestra el contenido de la lista
 * @param p Puntero a la lista
 */
template<typename T>
void display(Node<T> *p);

#endif //LISTS_H

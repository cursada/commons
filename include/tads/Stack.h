/**
 * @file Stack.h
 * @brief Biblioteca de funciones para manipulación de pilas (LIFO) con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de pilas (Last In, First Out)
 * utilizando plantillas. Implementa una pila basada en lista enlazada para operaciones
 * eficientes de inserción y eliminación en la parte superior de la estructura.
 */

#ifndef STACK_H
#define STACK_H

#include "../functions/lists.h"

/**
 * @brief Estructura que representa una pila (stack)
 * @tparam T Tipo de datos que almacena la pila
 */
template<typename T>
struct Stack
{
    Node<T>* p;  ///< Puntero al tope de la pila
    int cant;    ///< Cantidad de elementos en la pila
};

/**
 * @brief Crea una nueva pila vacía
 * @tparam T Tipo de datos de la pila
 * @return Nueva pila inicializada y vacía
 */
template<typename T>
Stack<T> stack();

/**
 * @brief Agrega un elemento al tope de la pila
 * @tparam T Tipo de datos de la pila
 * @param st Referencia a la pila a modificar
 * @param e Elemento a agregar
 * @return Puntero al elemento agregado en la pila
 */
template<typename T>
T* stackPush(Stack<T>& st, T e);

/**
 * @brief Extrae y retorna el elemento del tope de la pila
 * @tparam T Tipo de datos de la pila
 * @param st Referencia a la pila a modificar
 * @return Elemento extraído del tope de la pila
 */
template<typename T>
T stackPop(Stack<T>& st);

/**
 * @brief Verifica si la pila está vacía
 * @tparam T Tipo de datos de la pila
 * @param st Pila a verificar
 * @return true si la pila está vacía, false en caso contrario
 */
template<typename T>
bool stackIsEmpty(Stack<T> st);

/**
 * @brief Retorna la cantidad de elementos en la pila
 * @tparam T Tipo de datos de la pila
 * @param st Pila de la cual obtener el tamaño
 * @return Número de elementos en la pila
 */
template<typename T>
int stackSize(Stack<T> st);

#endif //STACK_H

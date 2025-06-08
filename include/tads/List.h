/**
 * @file List.h
 * @brief Biblioteca de listas enlazadas con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona una estructura de datos List basada en nodos enlazados,
 * permitiendo almacenar y manipular colecciones de elementos de cualquier tipo.
 * Incluye funciones para inserción, eliminación, búsqueda, ordenamiento e iteración
 * con manejo automático del tamaño y posición de iteración.
 */

#ifndef LIST_H
#define LIST_H

#include "../functions/lists.h"

/**
 * @brief Estructura de lista enlazada con plantillas
 * @tparam T Tipo de datos a almacenar
 */
template<typename T>
struct List
{
   Node<T>* p;  ///< Puntero al primer nodo de la lista
   int cant;    ///< Cantidad actual de elementos
   int cur;     ///< Posición actual para iteración
};

/**
 * @brief Crea una nueva lista vacía
 * @tparam T Tipo de datos de la lista
 * @return Lista inicializada
 */
template<typename T>
List<T> list();

/**
 * @brief Agrega un elemento al final de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param e Elemento a agregar
 * @return Puntero al elemento agregado
 */
template<typename T>
T* listAdd(List<T>& lst, T e);

/**
 * @brief Agrega un elemento al inicio de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param e Elemento a agregar
 * @return Puntero al elemento agregado
 */
template<typename T>
T* listAddFirst(List<T>& lst, T e);

/**
 * @brief Remueve un elemento de la lista usando una función de comparación
 * @tparam T Tipo de datos de la lista
 * @tparam K Tipo de la clave de búsqueda
 * @param lst Referencia a la lista
 * @param k Clave del elemento a remover
 * @param cmpTK Función de comparación entre T y K
 * @return Elemento removido
 */
template<typename T, typename K>
T listRemove(List<T>& lst, K k, int cmpTK(T, K));

/**
 * @brief Remueve el primer elemento de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @return Elemento removido
 */
template<typename T>
T listRemoveFirst(List<T>& lst);

/**
 * @brief Busca un elemento en la lista usando una función de comparación
 * @tparam T Tipo de datos de la lista
 * @tparam K Tipo de la clave de búsqueda
 * @param lst Lista en la cual buscar
 * @param k Clave a buscar
 * @param cmpTK Función de comparación entre T y K
 * @return Puntero al elemento encontrado
 */
template<typename T, typename K>
T* listFind(List<T> lst, K k, int cmpTK(T, K));

/**
 * @brief Verifica si la lista está vacía
 * @tparam T Tipo de datos de la lista
 * @param lst Lista a verificar
 * @return true si la lista está vacía, false en caso contrario
 */
template<typename T>
bool listIsEmpty(List<T> lst);

/**
 * @brief Retorna el tamaño actual de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Lista a consultar
 * @return Cantidad de elementos en la lista
 */
template<typename T>
int listSize(List<T> lst);

/**
 * @brief Libera toda la memoria de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 */
template<typename T>
void listFree(List<T>& lst);

/**
 * @brief Busca un elemento y lo agrega si no existe
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param t Elemento a buscar/agregar
 * @param cmpTT Función de comparación entre elementos T
 * @return Puntero al elemento encontrado o agregado
 */
template<typename T>
T* listDiscover(List<T>& lst, T t, int cmpTT(T, T));

/**
 * @brief Inserta un elemento manteniendo el orden de la lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param t Elemento a insertar
 * @param cmpTT Función de comparación entre elementos T
 * @return Puntero al elemento insertado
 */
template<typename T>
T* listOrderedInsert(List<T>& lst, T t, int cmpTT(T, T));

/**
 * @brief Ordena la lista usando una función de comparación
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param cmpTT Función de comparación entre elementos T
 */
template<typename T>
void listSort(List<T>& lst, int cmpTT(T, T));

/**
 * @brief Reinicia el iterador de la lista al inicio
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 */
template<typename T>
void listReset(List<T>& lst);

/**
 * @brief Verifica si hay más elementos para iterar
 * @tparam T Tipo de datos de la lista
 * @param lst Lista a verificar
 * @return true si hay más elementos, false en caso contrario
 */
template<typename T>
bool listHasNext(List<T> lst);

/**
 * @brief Obtiene el siguiente elemento en la iteración
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @return Puntero al siguiente elemento
 */
template<typename T>
T* listNext(List<T>& lst);

/**
 * @brief Obtiene el siguiente elemento con indicador de fin de lista
 * @tparam T Tipo de datos de la lista
 * @param lst Referencia a la lista
 * @param endOfList Referencia a booleano que indica si se llegó al final
 * @return Puntero al siguiente elemento
 */
template<typename T>
T* listNext(List<T>& lst, bool& endOfList);

/**
 * @brief Muestra todos los elementos de la lista usando la función display
 * @tparam T Tipo de datos de la lista
 * @param lista Lista a mostrar
 */
template<typename T>
void listDisplay(List<T> lista);

/**
 * @brief Muestra todos los elementos de la lista en formato "elemento -> "
 * @tparam T Tipo de datos de la lista
 * @param list Lista a mostrar
 */
template<typename T>
void mostrarLista(List<T> list);

#endif //LIST_H
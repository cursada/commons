/**
 * @file Array.h
 * @brief Biblioteca de funciones para manipulación de arrays dinámicos con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona una estructura de datos Array dinámico con plantillas,
 * permitiendo almacenar y manipular colecciones de elementos de cualquier tipo.
 * Incluye funciones para inserción, eliminación, búsqueda, ordenamiento y navegación.
 */

#ifndef ARRAY_H
#define ARRAY_H

/**
 * @brief Estructura de array dinámico
 * @tparam T Tipo de datos a almacenar
 */
template<typename T>
struct Array
{
   T* arr;  ///< Puntero al array de elementos
   int len; ///< Longitud actual del array
   int cap; ///< Capacidad total del array
};

/**
 * @brief Crea un nuevo array vacío con capacidad inicial
 * @tparam T Tipo de datos del array
 * @return Array inicializado
 *
 * @note Se llama arrayCreate porque si no es ambiguo con algunos compiladores.
 */
template<typename T>
Array<T> arrayCreate();

/**
 * @brief Redimensiona el array aumentando su capacidad en 1
 * @tparam T Tipo de datos del array
 * @param a Referencia al array a redimensionar
 */
template<typename T>
void redimensionar(Array<T>& a);

/**
 * @brief Agrega un elemento al final del array
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param t Elemento a agregar
 * @return Índice del elemento agregado
 */
template<typename T>
int arrayAdd(Array<T>& a, T t);

/**
 * @brief Obtiene un puntero al elemento en la posición especificada
 * @tparam T Tipo de datos del array
 * @param a Array del cual obtener el elemento
 * @param p Posición del elemento
 * @return Puntero al elemento
 */
template<typename T>
T* arrayGet(Array<T> a, int p);

/**
 * @brief Establece el valor de un elemento en la posición especificada
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param p Posición del elemento
 * @param t Nuevo valor del elemento
 */
template<typename T>
void arraySet(Array<T>& a, int p, T t);

/**
 * @brief Inserta un elemento en la posición especificada
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param t Elemento a insertar
 * @param p Posición donde insertar
 */
template<typename T>
void arrayInsert(Array<T>& a, T t, int p);

/**
 * @brief Retorna el tamaño actual del array
 * @tparam T Tipo de datos del array
 * @param a Array del cual obtener el tamaño
 * @return Cantidad de elementos en el array
 */
template<typename T>
int arraySize(Array<T> a);

/**
 * @brief Remueve y retorna el elemento en la posición especificada
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param p Posición del elemento a remover
 * @return Elemento removido
 */
template<typename T>
T arrayRemove(Array<T>& a, int p);

/**
 * @brief Remueve todos los elementos del array
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 */
template<typename T>
void arrayRemoveAll(Array<T>& a);

/**
 * @brief Busca un elemento en el array usando una función de comparación
 * @tparam T Tipo de datos del array
 * @tparam K Tipo de la clave de búsqueda
 * @param a Array en el cual buscar
 * @param k Clave a buscar
 * @param cmpTK Función de comparación entre T y K
 * @return Índice del elemento encontrado o -1 si no se encuentra
 */
template<typename T, typename K>
int arrayFind(Array<T> a, K k, int cmpTK(T, K));

/**
 * @brief Inserta un elemento manteniendo el orden del array
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param t Elemento a insertar
 * @param cmpTT Función de comparación entre elementos T
 * @return Índice donde se insertó el elemento
 */
template<typename T>
int arrayOrderedInsert(Array<T>& a, T t, int cmpTT(T, T));

/**
 * @brief Busca un elemento y lo agrega si no existe
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param t Elemento a buscar/agregar
 * @param cmpTT Función de comparación entre elementos T
 * @return Puntero al elemento encontrado o agregado
 */
template<typename T>
T* arrayDiscover(Array<T>& a, T t, int cmpTT(T, T));

/**
 * @brief Ordena el array usando una función de comparación
 * @tparam T Tipo de datos del array
 * @param a Referencia al array
 * @param cmpTT Función de comparación entre elementos T
 */
template<typename T>
void arraySort(Array<T>& a, int cmpTT(T, T));

/**
 * @brief Muestra todos los elementos del array en la salida estándar
 * @tparam T Tipo de datos del array
 * @param arr Array a mostrar
 */
template<typename T>
void mostrarArray(Array<T> arr);

#endif //ARRAY_H
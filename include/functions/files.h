/**
* @file files.h
 * @brief Biblioteca de funciones para manipulación de archivos con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para el manejo de archivos binarios
 * con plantillas, permitiendo leer y escribir registros de cualquier tipo.
 * Incluye funciones para posicionamiento, conteo y navegación dentro de archivos.
 */

#ifndef FILES_H
#define FILES_H

#include <iostream>

/**
 * @brief Escribe un registro en un archivo
 * @param f Puntero al archivo
 * @param t Registro a escribir
 */
template<typename T>
void write(FILE *f, T t);

/**
 * @brief Lee un registro del archivo
 * @param f Puntero al archivo
 * @return Registro leído
 */
template<typename T>
T read(FILE *f);

/**
 * @brief Establece la posición del archivo en un determinado registro
 * @param f Puntero al archivo
 * @param n Número de registro
 */
template<typename T>
void seek(FILE *f, int n);

/**
 * @brief Retorna la cantidad de registros de un archivo
 * @param f Puntero al archivo
 * @return Cantidad de registros
 */
template<typename T>
int fileSize(FILE *f);

/**
 * @brief Retorna el número de registro actual del indicador de posición
 * @param f Puntero al archivo
 * @return Número de registro actual
 */
template<typename T>
int filePos(FILE *f);

#endif //FILES_H

/**
 * @file BitReader.h
 * @brief Biblioteca para lectura de archivos bit a bit con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para la lectura de archivos a nivel de bit,
 * permitiendo extraer bits individuales de archivos binarios y convertir tipos
 * de datos a su representación binaria en formato string.
 */

#ifndef BITREADER_H
#define BITREADER_H

#include <iostream>

/**
 * @brief Estructura para lectura de archivos bit a bit
 */
struct BitReader
{
   FILE* f;  ///< Puntero al archivo a leer
   int buf;  ///< Buffer para almacenar el byte actual
   int pos;  ///< Posición actual dentro del byte (0-7)
};

/**
 * @brief Crea un nuevo BitReader para un archivo
 * @param f Puntero al archivo a leer
 * @return BitReader inicializado
 */
BitReader bitReader(FILE* f);

/**
 * @brief Lee el siguiente bit del archivo
 * @param br Referencia al BitReader
 * @return Valor del bit leído (0 o 1)
 */
int bitReaderRead(BitReader& br);

#endif //BITREADER_H
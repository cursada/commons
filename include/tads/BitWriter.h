/**
* @file BitWriter.h
 * @brief Biblioteca para escritura de archivos bit a bit con plantillas
 * @author Lucas Schvartzman
 * @version 1.0.0
 * @date 2023
 *
 * Esta biblioteca proporciona funciones para la escritura de archivos a nivel de bit,
 * permitiendo escribir bits individuales o cadenas de bits en archivos binarios
 * con buffering automático y flush para completar bytes parciales.
 */

#ifndef BITWRITER_H
#define BITWRITER_H

#include <iostream>

/**
 * @brief Estructura para escritura de archivos bit a bit
 */
struct BitWriter
{
    FILE* f;    ///< Puntero al archivo donde escribir
    std::string s;   ///< Buffer de bits pendientes de escribir
    int pos;    ///< Posición actual en el buffer
};

/**
 * @brief Crea un nuevo BitWriter para un archivo
 * @param f Puntero al archivo donde escribir
 * @return BitWriter inicializado
 */
BitWriter bitWriter(FILE* f);

/**
 * @brief Escribe un bit individual al buffer
 * @param bw Referencia al BitWriter
 * @param bit Valor del bit a escribir (0 o 1)
 */
void bitWriterWrite(BitWriter& bw, int bit);

/**
 * @brief Escribe una cadena de bits al buffer
 * @param bw Referencia al BitWriter
 * @param sbit Cadena de bits a escribir (ej: "10110101")
 */
void bitWriterWrite(BitWriter& bw, const std::string &sbit);

/**
 * @brief Vuelca el buffer al archivo completando bytes parciales con ceros
 * @param bw Referencia al BitWriter
 */
void bitWriterFlush(BitWriter& bw);

#endif //BITWRITER_H
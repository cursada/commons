# Commons 📚

[![License: Unlicense](https://img.shields.io/badge/License-Unlicense-lightgrey.svg)](https://unlicense.org/)
[![Made with ❤️ in C++](https://img.shields.io/badge/Made%20with-C++-00599C.svg)](#)
[![Project Status: Archived](https://img.shields.io/badge/status-archived-yellow)](#)

> Una completa biblioteca en C++ con funciones utilitarias y tipos abstractos de datos (TADs) listos para usar.

## 📦 ¿Qué es commons?

**commons** es una biblioteca moderna en C++ que reúne una gran variedad de funciones y estructuras de datos genéricas diseñadas para facilitar el desarrollo de programas. Fue pensada como un conjunto reutilizable, eficiente y bien documentado, ideal para estudiantes, docentes y desarrolladores que deseen evitar reinventar la rueda.

Organizada en dos grandes módulos:

- **`functions/`**: funciones utilitarias independientes para manipular arrays, cadenas, archivos, números y más.
- **`tads/`**: implementaciones de estructuras de datos como listas, colas, pilas, matrices y mapas, con soporte para plantillas.

## 📁 Estructura del repositorio

```
commons/
│
├── functions/       # Funciones generales
│   ├── arrays.h
│   ├── conversions.h
│   ├── files.h
│   ├── lists.h
│   ├── numbers.h
│   ├── strings.h
│   ├── tokens.h
│   └── validations.h
│
├── tads/            # Tipos Abstractos de Datos
│   ├── Array.h
│   ├── BitReader.h
│   ├── BitWriter.h
│   ├── Coll.h
│   ├── List.h
│   ├── Map.h
│   ├── Matrix.h
│   ├── Queue.h
│   └── Stack.h
│
├── examples/        # (Opcional) Código de ejemplo y pruebas
├── LICENSE
└── README.md
```

## 🧠 Principales características

### 🔧 Funciones
- **Manipulación de arrays**: inserción, eliminación, ordenamiento, búsqueda.
- **Conversión de tipos**: int ↔ string, char ↔ int, binario y hexadecimal.
- **Manejo de archivos**: lectura/escritura de archivos binarios usando plantillas.
- **Operaciones con strings**: tokenización, validación, transformación, comparación.
- **Validaciones de caracteres**: mayúsculas, minúsculas, dígitos, etc.

### 📐 Tipos Abstractos de Datos
- **`Array<T>`**: array dinámico genérico con operaciones comunes.
- **`Coll<T>`**: colección serializada como string con delimitadores.
- **`List<T>` / `Queue<T>` / `Stack<T>`**: listas enlazadas dinámicas.
- **`Map<K, V>`**: diccionario con pares clave-valor.
- **`Matrix<T>`**: representación bidimensional genérica.
- **`BitReader / BitWriter`**: acceso a archivos bit a bit.

## 🚀 Cómo usar

```cpp
#include "functions/strings.h"
#include "tads/Array.h"

int main() {
    Array<int> arr = array<int>();
    add<int>(arr, 42);
    add<int>(arr, 7);
    show<int>(arr);
    
    string upper = toUpper("hola mundo");
    cout << upper << endl;
}
```

Puedes compilar los programas normalmente usando `g++`:

```bash
g++ main.cpp -o programa
```

## ✍️ Autores

Los autores de esta biblioteca son: [lucasschvartzman](https://github.com/lucasschvartzman) - [msantucho2](https://github.com/msantucho2) _(2023)_


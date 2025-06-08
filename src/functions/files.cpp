#include "../../include/functions/files.h"


template<typename T>
void write(FILE *f, T t) {
    fseek(f, 0, SEEK_CUR);
    fwrite(&t, sizeof(T), 1, f);
}

template<typename T>
T read(FILE *f) {
    fseek(f, 0, SEEK_CUR);
    T t;
    fread(&t, sizeof(T), 1, f);
    return t;
}

template<typename T>
void seek(FILE *f, int n) {
    fseek(f, n * sizeof(T), SEEK_SET);
}

template<typename T>
int fileSize(FILE *f) {
    const int aux = ftell(f);
    fseek(f, 0, SEEK_END);
    const int i = (int) ftell(f) / sizeof(T);
    fseek(f, aux, SEEK_SET);
    return i;
}

template<typename T>
int filePos(FILE *f) {
    return (int) ftell(f) / sizeof(T);
}

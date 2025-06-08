#include "../../include/tads/Matrix.h"

template <typename T>
Matrix<T> matrix(int f, int c, T valorDefault, std::string tToString(T))
{
    Matrix<T> m;
    m.c = c;
    m.f = f;

    m.datos = coll<T>();
    const int x = c * f;
    for(int i = 0; i < x; i++)
    {
        collAdd<T>(m.datos, valorDefault, tToString);
    }

    return m;
}

template <typename T>
int coordenadasToInt(Matrix<T> m, int f, int c)
{
    return f * m.c + c;
}

template <typename T>
T mtxGetAt(Matrix<T> m, int f, int c, T tFromString(std::string))
{
    const int n = coordenadasToInt<T>(m, f, c);
    return collGetAt<T>(m.datos, n, tFromString);
}

template <typename T>
void mtxSetAt(Matrix<T>& m, T t, int f, int c, std::string tToString(T))
{
    int n = coordenadasToInt<T>(m, f, c);
    collSetAt<T>(m.datos, t, n, tToString);
}
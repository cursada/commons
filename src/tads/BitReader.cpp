#include "../../include/tads/BitReader.h"

#include "../../include/functions/files.h"
#include "../../include/functions/conversions.h"
#include <cmath>

BitReader bitReader(FILE* f)
{
    return {f, 0, 0};
}

int bitReaderRead(BitReader& br)
{
    if(br.pos % 8 == 0)
    {
        br.buf = (int)read<unsigned char>(br.f);
        br.buf = br.buf >= 0 ? br.buf : 256 + br.buf;
        br.pos = 0;
    }
    const int mask = pow(2, 7 - br.pos);
    const int i = br.buf & mask;
    br.pos++;
    return i > 0 ? 1 : 0;
}

template<typename T>
std::string _binToString(T t)
{
    const int fin = sizeof(T) * 8 - 1;
    std::string bin;
    for(int i = 0; i <= fin; i++)
    {
        int mask = pow(2, fin - i);
        int x = (t & mask) > 0 ? 1 : 0;
        bin += intToString(x);
    }
    return bin;
}
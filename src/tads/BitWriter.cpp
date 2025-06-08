#include "../../include/tads/BitWriter.h"

#include "../../include/functions/files.h"
#include "../../include/functions/strings.h"
#include "../../include/functions/conversions.h"

BitWriter bitWriter(FILE* f)
{
    return {f, "", 0};
}

void bitWriterWrite(BitWriter& bw, const int bit)
{
    bw.s += intToString(bit);
    bw.pos++;
}

void bitWriterWrite(BitWriter& bw, const std::string &sbit)
{
    bw.s += sbit;
    bw.pos += length(sbit);
}

void bitWriterFlush(BitWriter& bw)
{
    seek<char>(bw.f, fileSize<char>(bw.f));
    while(bw.pos % 8 != 0)
    {
        bitWriterWrite(bw, 0);
    }
    while(bw.s != "")
    {
        char a = stringToInt(substring(bw.s, 0, 8), 2);
        bw.s = substring(bw.s, 8, length(bw.s));
        write<char>(bw.f, a);
    }
    bw.pos = 0;
}
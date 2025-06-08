#include "../../include/functions/conversions.h"

#include "../../include/functions/numbers.h"
#include "../../include/functions/strings.h"

int charToInt(const char c) {
    return c <= '9' && c >= '0' ? c - '0' : c >= 'A' && c <= 'Z' ? c - '7' : c >= 'a' && c <= 'z' ? c - 'W' : c;
}

char intToChar(const int i) {
    return i >= 0 && i <= 9 ? i + '0' : i >= 10 && i <= 35 ? i + '7' : i;
}

std::string intToString(int i) {
    std::string s = i < 0 ? "-" : "";
    i = abs(i);
    for (int y = digitCount(i) - 1; y >= 0; y--) {
        s += intToChar(getDigit(i, y));
    }
    return s;
}

int stringToInt(const std::string &s, const int b) {
    int num = 0;
    int pot = 1;
    const int total = length(s);
    for (int i = total - 1; i >= 0; i--) {
        if (i == 0 && s[i] == '-') {
            num *= -1;
        } else {
            const int dig = charToInt(s[i]);
            num += dig * pot;
            pot *= b;
        }
    }
    return num;
}

int stringToInt(const std::string &s) {
    int num = 0;
    int pot = 1;
    const int total = length(s);
    for (int i = total - 1; i >= 0; i--) {
        if (i == 0 && s[i] == '-') {
            num *= -1;
        } else {
            const int dig = charToInt(s[i]);
            num += dig * pot;
            pot *= 10;
        }
    }
    return num;
}

std::string charToString(const char c) {
    return {c};
}

char stringToChar(const std::string &s) {
    return s[0];
}

std::string stringToString(const std::string &s) {
    return s;
}

std::string doubleToString(const double d) {
    char buffer[100];
    sprintf(buffer, "%.6f", d);
    std::string s = buffer;
    while (s[length(s) - 1] == '0') {
        s = substring(s, 0, length(s) - 1);
    }
    return s;
}

double stringToDouble(const std::string &s) {
    int pot1 = 1;
    double num = 0;
    double pot2 = 10;
    for (int i = indexOf(s, '.') - 1; i >= 0; i--) {
        const int dig = charToInt(s[i]);
        num += dig * pot1;
        pot1 *= 10;
    }
    for (int i2 = indexOf(s, '.') + 1; i2 <= length(s); i2++) {
        const int dig = charToInt(s[i2]);
        num += dig / pot2;
        pot2 *= 10;
    }
    return num;
}

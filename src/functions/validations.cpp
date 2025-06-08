#include "../../include/functions/validations.h"

#include "../../include/functions/files.h"

bool isDigit(const char c) {
    return c >= '0' && c <= '9';
}

bool isLetter(const char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isUpperCase(const char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLowerCase(const char c) {
    return c >= 'a' && c <= 'z';
}

char toUpperCase(const char c) {
    return c - 32;
}

char toLowerCase(const char c) {
    return c + 32;
}

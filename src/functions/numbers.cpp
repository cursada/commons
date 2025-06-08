#include "../../include/functions/numbers.h"

#include <cmath>

int getDigit(int n, const int i) {
    n = abs(n);
    int pot = 10;
    int aux = n;
    for (int j = 0; j < i; j++) {
        pot *= 10;
    }
    aux /= pot;
    n -= (aux * pot);
    return n / (pot / 10);
}

int digitCount(int n) {
    n = abs(n);
    int i = 1;
    int pot = 9;
    while (n > pot) {
        pot = pot * 10 + 9;
        i++;
    }
    return i;
}

int cmpInt(const int a, const int b) {
    return a - b;
}

int cmpDouble(const double a, const double b) {
    return a - b;
}
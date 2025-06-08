#include "../../include/functions/tokens.h"

#include "../../include/functions/strings.h"

int tokenCount(const std::string &s, const char sep) {
    int i;
    if (isEmpty(s)) {
        i = 0;
    } else {
        i = charCount(s, sep) + 1;
    }
    return i;
}

void addToken(std::string &s, const char sep, const std::string &t) {
    if (isEmpty(s)) {
        s += t;
    } else {
        s += sep + t;
    }
}

std::string getTokenAt(const std::string &s, const char sep, const int i) {
    const int d = indexOfN(s, sep, i);
    const int h = indexOfN(s, sep, i + 1);
    std::string p = substring(s, d + 1, h);
    return p;
}

void removeTokenAt(std::string &s, const char sep, const int i) {
    s = cpad(s, length(s) + 2, sep);
    const int d = indexOfN(s, sep, i + 1);
    s = removeAt(s, d);
    while (s[d] != sep) {
        s = removeAt(s, d);
    }
    s = removeAt(s, 0);
    s = removeAt(s, length(s) - 1);
}

void setTokenAt(std::string &s, const char sep, const std::string &t, const int i) {
    const std::string ini = substring(s, 0, indexOfN(s, sep, i));
    const std::string fin = substring(s, indexOfN(s, sep, i + 1));
    if (i == 0) {
        s = ini + t + fin;
    } else {
        s = ini + sep + t + fin;
    }
}

int findToken(std::string s, const char sep, const std::string &t) {
    s = cpad(s, length(s) + 2, sep);
    const int i = indexOf(s, sep + t + sep);
    if (i == -1) {
        return -1;
    }
    const std::string u = substring(s, 0, i + 1);
    return charCount(u, sep) - 1;
}

std::string emptyTString(const int x, const char sep) {
    std::string s;
    for (int i = 0; i < x; i++) {
        addToken(s, sep, " ");
    }
    return s;
}

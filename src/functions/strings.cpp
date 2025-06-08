#include "../../include/functions/strings.h"

#include "../../include/functions/validations.h"

int length(const std::string &s) {
    int a = 0;
    while (s[a] != '\0') {
        a++;
    }
    return a;
}

int charCount(const std::string &s, const char c) {
    int cont = 0;
    for (int i = 0; i < length(s); i++) {
        if (s[i] == c) {
            cont++;
        }
    }
    return cont;
}

std::string substring(const std::string &s, const int d, const int h) {
    std::string r;
    for (int i = d; i < h; i++) {
        r += s[i];
    }
    return r;
}

std::string substring(const std::string &s, const int d) {
    std::string r;
    for (int i = d; i < length(s); i++) {
        r += s[i];
    }
    return r;
}

int indexOf(const std::string &s, const char c) {
    for (int i = 0; i < length(s); i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int indexOf(const std::string &s, const char c, const int offSet) {
    for (int i = offSet; i < length(s); i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int indexOf(const std::string &s, const std::string &toSearch) {
    int d = 0;
    for (int h = length(toSearch); h <= length(s); h++) {
        if (substring(s, d, h) == toSearch) {
            return d;
        }
        d++;
    }
    return -1;
}

int indexOf(const std::string &s, const std::string &toSearch, const int offset) {
    int currentOffset = offset;
    for (int h = length(toSearch) + offset; h <= length(s); h++) {
        if (substring(s, currentOffset, h) == toSearch) {
            return currentOffset;
        }
        currentOffset++;
    }
    return -1;
}

int lastIndexOf(const std::string &s, const char c) {
    for (int i = length(s) - 1; i >= 0; i--) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int indexOfN(const std::string &s, const char c, const int n) {
    int cont = 0;
    int pos = -1;
    for (int i = 0; i < length(s); i++) {
        if (s[i] == c) {
            cont++;
            pos = cont == n ? i : pos;
        }
    }
    return cont == 0 ? pos : n > cont ? length(s) : pos;
}

bool isEmpty(const std::string &s) {
    return s[0] == '\0';
}

bool startsWith(const std::string &s, const std::string &x) {
    return substring(s, 0, length(x)) == x;
}

bool endsWith(const std::string &s, const std::string &x) {
    return substring(s, length(s) - length(x)) == x;
}

bool contains(const std::string &s, const char c) {
    return charCount(s, c) >= 1;
}

std::string replace(std::string s, const char oldChar, const char newChar) {
    for (int i = 0; i < length(s); i++) {
        s[i] = s[i] == oldChar ? newChar : s[i];
    }
    return s;
}

std::string insertAt(const std::string &s, const int pos, const char c) {
    return substring(s, 0, pos) + c + substring(s, pos + 1);
}

std::string removeAt(const std::string &s, const int pos) {
    return substring(s, 0, pos) + substring(s, pos + 1);
}

std::string ltrim(std::string s) {
    while (s[0] == ' ') {
        s = removeAt(s, 0);
    }
    return s;
}

std::string rtrim(std::string s) {
    while (s[length(s) - 1] == ' ') {
        s = removeAt(s, length(s) - 1);
    }
    return s;
}

std::string trim(std::string s) {
    return rtrim(ltrim(std::move(s)));
}

std::string replicate(const char c, const int n) {
    std::string s;
    for (int i = 0; i < n; i++) {
        s += c;
    }
    return s;
}

std::string spaces(const int n) {
    return replicate(' ', n);
}

std::string lpad(const std::string &s, const int n, const char c) {
    return replicate(c, n - length(s)) + s;
}

std::string rpad(const std::string &s, const int n, const char c) {
    return s + replicate(c, n - length(s));
}

std::string cpad(const std::string &s, const int n, const char c) {
    return lpad(s, n - (n - length(s)) / 2, c) + replicate(c, (n - length(s)) / 2);
}

std::string toUpperCase(std::string s) {
    for (int i = 0; i < length(s); i++) {
        if (isLowerCase(s[i])) {
            s[i] = toUpperCase(s[i]);
        }
    }
    return s;
}

std::string toLowerCase(std::string s) {
    for (int i = 0; i < length(s); i++) {
        if (isUpperCase(s[i])) {
            s[i] = toLowerCase(s[i]);
        }
    }
    return s;
}

int cmpString(const std::string &a, const std::string &b) {
    return a < b ? -1 : a > b;
}

char getCharAt(const std::string &s, const int pos) {
    return s[pos];
}

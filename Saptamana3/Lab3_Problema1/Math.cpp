#include "Math.h"
#include <cstdarg>
#include <string.h>
#include <malloc.h>

int Math::Add(int a, int b) {
    return a+b;
}

int Math::Add(int a, int b, int c) {
    return a+b+c;
}

int Math::Add(double a, double b) {
    return a+b;
}

int Math::Add(double a, double b, double c) {
    return a+b+c;
}

int Math::Mul(int a, int b) {
    return a*b;
}

int Math::Mul(int a, int b, int c) {
    return a*b*c;
}

int Math::Mul(double a, double b) {
    return a*b;
}

int Math::Mul(double a, double b, double c) {
    return a*b*c;
}

int Math::Add(int count, ...) {
    int x, s=0;
    int value;
    va_list args;
    va_start(args, count);
    for (unsigned i = 0; i < count; i++) {
        s+= va_arg(args, int);
    }
    va_end(args);
    return s;
}

char* Math::Add(const char* a, const char* b) {
    if (a==nullptr or b==nullptr)
        return nullptr;
    size_t len1  = a ? strlen(a) : 0;
    size_t len2  = b ? strlen(b) : 0;
    char* joined = (char*)malloc(len1 + len2 + 1);
    if (joined) {
        memcpy(joined, a, len1);
        memcpy(joined + len1, b, len2);
        joined[len1 + len2] = '\0';
    }
    return joined;
}

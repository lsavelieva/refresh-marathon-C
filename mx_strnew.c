#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = malloc(size + 1);

    if (NULL == str)
        return NULL;
    if (size < 0 || size > 2147483646)
        return NULL;
    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    return str;
}


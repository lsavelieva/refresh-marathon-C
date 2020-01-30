#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);
    char *new = mx_strnew(lenght + 1);

    new = mx_strcpy(new, str);
        return new;
}


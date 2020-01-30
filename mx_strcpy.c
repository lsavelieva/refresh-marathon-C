char *mx_strcpy(char *dst, const char *src) {
    char *x = dst;

    while ((*dst++ = *src++) != '\0');
    return x;
}


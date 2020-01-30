void mx_printchar(char c);

void mx_print_alphabet(void) {
    int let;

    for (int i = 0; i < 26; i++) {
        if (i % 2 == 0)
            let = 65 + i;
        else
            let = 97 + i;
        mx_printchar(let);
    }
    mx_printchar('\n');
}


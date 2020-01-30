int mx_factorial_iter(int n);

int mx_factorial_iter(int n) {
    int res;

    if ((n < 0) || (n > 12))
        return 0;
    if ((n == 0) || (n == 1))
        return 1;
    for (res = 1; n > 1; n--) {
        res = res * n;
    }
    return res;	
}


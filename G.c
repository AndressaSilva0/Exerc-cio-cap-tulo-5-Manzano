#include <stdio.h>

int main() {

    int exp;
    long long res = 1;

    for (exp = 0; exp <= 15; exp++) {
        printf("%lld\n", res);
        res *= 3;
    }

    return 0;
}
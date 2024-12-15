#include <stdlib.h>
#include <iostream>

static long gcd(long m, long n) {
    if (m < n) {
        long t = m;
        m = n;
        n = t;
    }

    long r = m % n;
    while (r > 0) {
        m = n;
        n = r;

        r = m % n;
    }

    return n;
}

int main(int argc, const char** argv) {
    if (argc != 3) {
        return 1;
    }

    long m = std::strtol(argv[1], NULL, 10);
    long n = std::strtol(argv[2], NULL, 10);
    long g = gcd(m, n);
    std::cout << g << std::endl;
    return 0;
}
#include "stdio.h"

long seed = 1118948542;

int next (int bits) {
    seed =
        (seed * 0x5DEECE66DL + 0xBL) & ((1L << 48) - 1);

    return (int) (seed >> (48 - bits));
}

int next_int () {
    return next(32);
}

double next_double () {
    return (((long) next(26) << 27) + next(27)) / ((double) (1L << 53));
}

int main () {
    printf("Hll Wrl %d\n", next_int());
    printf("Hll Wrl %f\n", next_double());
}
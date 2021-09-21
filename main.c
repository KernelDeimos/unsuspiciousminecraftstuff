#include "stdio.h"

long seed = 1118948542;

int next_int (int bits) {
    seed =
        (seed * 0x5DEECE66DL + 0xBL) & ((1L << 48) - 1);

    return (int) (seed >> (48 - bits));
}

double next_double () {
    return (((long) next_int(26) << 27) + next_int(27)) / ((double) (1L << 53));
}

int main () {
    printf("Hll Wrl %d\n", next_int(32));
    printf("Hll Wrl %f\n", next_double());
}
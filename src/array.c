#include <stdio.h>

int main(void) {
    int slots[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int id;
    for (id = 0; id < sizeof(slots) / sizeof(int); id++) {
        printf("O valor do indice %d em slots eh %d\n", id, slots[id]);
    }

    return 0;
}
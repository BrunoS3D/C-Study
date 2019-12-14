#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);

    long a = 0;
    long b = 1;
    long result = 0;

    int id;
    for (id = 0; id < num; id++) {
        result = a + b;
        a = b;
        b = result;

        if (id < num - 1) {
            printf("%d, ", result);
        } else {
            printf("%d", result);
        }
    }

    return 0;
}
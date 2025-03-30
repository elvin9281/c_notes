#include <stdio.h>
#include "../lib/mylib.h"

int main() {
    hello();
    printf("3 + 4 = %d\n", add(3, 4));
    printf("3 * 4 = %d\n", multiply(3, 4));
    return 0;
}


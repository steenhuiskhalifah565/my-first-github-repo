#include <stdio.h>
int main() {
    int x = 4;
    int y = 7;
    int z = add(x, y);
    printf("The sum of %d and %d is %d", x, y, z);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

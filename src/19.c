#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("Executing %d\n", ++i);
    } while (i <= 5);

    return 0;
}

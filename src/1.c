#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 10) {
        printf("%d is greater than 10\n", num);
    } else {
        printf("%d is less than or equal to 10\n", num);
    }
    return 0;
}

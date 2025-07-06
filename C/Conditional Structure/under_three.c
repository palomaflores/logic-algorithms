#include <stdio.h>

int main() {

    int x, y, z, smaller;

    printf("First value: ");
    scanf("%d", &x);
    printf("Second value: ");
    scanf("%d", &y);
    printf("Third value: ");
    scanf("%d", &z);

    if (x <= y  && x <= z) {
        smaller = x;
    } else if (y <= x  &&  y <= z) {
        smaller = y;
    } else if (z < x  &&  z < y) {
        smaller = z;
    }

    printf("SMALLER = %d\n", smaller);

    return 0;
}
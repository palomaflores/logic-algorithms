#include <stdio.h>

int main() {

    int x, y, z, menor;

    printf("Primeiro valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);
    printf("Terceiro valor: ");
    scanf("%d", &z);

    if (x <= y  && x <= z) {
        menor = x;
    } else if (y <= x  &&  y <= z) {
        menor = y;
    } else if (z < x  &&  z < y) {
        menor = z;
    }

    printf("MENOR = %d\n", menor);

    return 0;
}
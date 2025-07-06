#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida de A: ");
    scanf("%lf", &a);
    printf("Digite a medida de B: ");
    scanf("%lf", &b);
    printf("Digite a medida de C: ");
    scanf("%lf", &c);

    quadrado = a * a;
    triangulo = (a * b) / 2;
    trapezio = ((a + b) * c) / 2;

    printf("AREA DO QUADRADO = %.4lf \n", quadrado);
    printf("AREA DO TRIANGULO = %.4lf \n", triangulo);
    printf("AREA DO TRAPEZIO = %.4lf \n", trapezio);

    return 0;
}
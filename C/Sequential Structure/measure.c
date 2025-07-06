#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, square, triangle, trapezoid;

    printf("Enter the measure of A: ");
    scanf("%lf", &a);
    printf("Enter the measure of B: ");
    scanf("%lf", &b);
    printf("Enter the measure of C: ");
    scanf("%lf", &c);

    square = a * a;
    triangle = (a * b) / 2;
    trapezoid = ((a + b) * c) / 2;

    printf("SQUARE AREA = %.4lf \n", square);
    printf("TRIANGLE AREA = %.4lf \n", triangle);
    printf("TRAPEZOID AREA = %.4lf \n", trapezoid);

    return 0;
}
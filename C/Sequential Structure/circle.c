#include <stdio.h>
#include <math.h>

int main(){

    double radius, area, pi;

    printf("Enter the value of the circle radius: ");
    scanf("%lf", &radius);

    pi = 3.14159;
    area = pi *radius * radius;

    printf("AREA = %.3lf", area);

    return 0;
}
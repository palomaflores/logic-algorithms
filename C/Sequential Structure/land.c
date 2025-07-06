#include <stdio.h>

int main(){

    double width, length, squareMeters, area, price;

    printf("Enter the width of the land: ");
    scanf("%lf", &width);
    printf("Enter the length of the land: ");
    scanf("%lf", &length);
    printf("Enter the value per square meter: ");
    scanf("%lf", &squareMeters);

    area = width * length;
    price = area * squareMeters;

    printf("Land area = %.2lf\n", area);
    printf("Land price = %.2lf", price);    

    return 0;
}
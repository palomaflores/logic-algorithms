#include <stdio.h>

int main(){

    int distance;
    double usedFuel, averageConsumption;

    printf("Distance traveled: ");
    scanf("%d", &distance);

    printf("Used Fuel: ");
    scanf("%lf", &usedFuel);

    averageConsumption = distance / usedFuel;

    printf("Consumo medio = %.3lf", averageConsumption);

    return 0;
}
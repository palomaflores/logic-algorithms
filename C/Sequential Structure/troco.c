#include <stdio.h>

int main(){

    double total, unitValue, payment, change;
    int quant;

    printf("Unit price of the product: ");
    scanf("%lf", &unitValue);
    printf("Quantity purchased: ");
    scanf("%d", &quant);
    printf("Money received: ");
    scanf("%lf", &payment);

    total = quant * unitValue;
    change = payment - total;

    printf("CHANGE = %.2lf", change);

    return 0;
}
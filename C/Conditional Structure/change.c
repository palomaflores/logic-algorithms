#include <stdio.h>

int main() {

    int quant;
    double priceUnit, payment, total, change;

    printf("Unit price of the product: ");
    scanf("%lf", &priceUnit);

    printf("Quantity purchased: ");
    scanf("%d", &quant);

    printf("Payment: ");
    scanf("%lf", &payment);

    total = priceUnit * quant;
    change = (payment - total);

    if (payment > total) {
        printf("Change = %.2lf", change);
    } else {
        change = -(payment - total);
        printf("There isn't enough money! %.2lf left to pay.", change);
    }

    return 0;
}
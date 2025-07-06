#include <stdio.h>

int main() {

    int minutes;
    double price;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    price = 50.00;

    if (minutes <= 100) {
        printf("Amount to pay: %.2lf", price);
    }
    else {
        price = price + (minutes - 100) * 2.00;
        printf("Amount to pay: %.2lf", price);
    }

    return 0;
}

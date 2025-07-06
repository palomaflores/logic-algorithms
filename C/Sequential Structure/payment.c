#include <stdio.h>

int main(){

    char employeeName[30];
    double hourlyRate, payment;
    int hoursWorked;

    printf("Nome: ");
    fgets(employeeName, 30, stdin);
    strtok(employeeName, "\n");

    printf("Hourly rate: ");
    scanf("%lf", &hourlyRate);

    printf("Hours worked: ");
    scanf("%d", &hoursWorked);

    payment = hoursWorked * hourlyRate;

    printf("The payment for %s is %.2lf", employeeName, payment);

    return 0;
}
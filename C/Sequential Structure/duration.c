#include <stdio.h>

int main(){

    int duration, hours, minutes, seconds;

    printf("Enter the duration in seconds: ");
    scanf("%d", &duration);

    hours = duration / 3600;
    minutes = (duration % 3600) / 60;
    seconds = (duration % 60);

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
#include <stdio.h>

int main() {

    double note1, note2, finalNote;

    printf("Enter the first note: ");
    scanf("%lf", &note1);
    printf("Enter the second note: ");
    scanf("%lf", &note2);

    finalNote = note1 + note2;

    if (finalNote >= 60.00) {
        printf("FINAL NOTE = %.1lf", finalNote);
        printf("APPROVED");      

    } else {
        printf("FINAL NOTE = %.1lf \n", finalNote);
        printf("FAILED");
    }

    return 0;
}
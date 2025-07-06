// ler base e altura de retangulo
// mostrar area, perímetro e diagonal com 4 cadas decimais todos

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double base, heigth, area, perimeter, diagonal;
    
    printf("Rectangle base: ");
    scanf("%lf", &base);
    printf("Rectangle heigth: ");
    scanf("%lf", &heigth);

    area = base * heigth;
    perimeter = 2 * (base + heigth);
    diagonal = sqrt (base * base + heigth * heigth);

    printf("AREA = %.4lf\n", area);
    printf("PERIMETER = %.4lf\n", perimeter);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
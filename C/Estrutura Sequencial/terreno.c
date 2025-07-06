#include <stdio.h>

int main(){

    double largura, comprimento, metroQ, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metroQ);

    area = largura * comprimento;
    preco = area * metroQ;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf", preco);    

    return 0;
}
#include <stdio.h>

int main(){

    double total, precoUnit, pagamento, troco;
    int quant;

    printf("Preço unitario do produto: ");
    scanf("%lf", &precoUnit);
    printf("Quantidade comprada:");
    scanf("%d", &quant);
    printf("Dinheiro recebido:");
    scanf("%lf", &pagamento);

    total = quant * precoUnit;
    troco = pagamento - total;

    printf("TROCO = %.2lf", troco);

    return 0;
}
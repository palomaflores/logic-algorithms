#include <stdio.h>

int main(){

    char nomeFuncionario[30];
    double valorHora, pagamento;
    int horasTrab;

    printf("Nome: ");
    fgets(nomeFuncionario, 30, stdin);
    strtok(nomeFuncionario, "\n");

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrab);

    pagamento = horasTrab * valorHora;

    printf("O pagamento para %s deve ser %.2lf", nomeFuncionario, pagamento);

    return 0;
}
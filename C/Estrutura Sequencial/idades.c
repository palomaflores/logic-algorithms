#include <stdio.h>
#include <string.h>

int main(){

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("DADOS DA PRIMEIRA PESSOA\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    strtok(nome1,"\n");

    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();
    
    printf("DADOS DA SEGUNDA PESSOA\n");
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    strtok(nome2,"\n");

    printf("Idade: ");
    scanf("%d", &idade2);
    
    media = (idade1 + idade2)/2.0;

    printf("A idade media de  %s  e  %s e de %.1lf anos.", nome1, nome2, media);

    return 0;
}
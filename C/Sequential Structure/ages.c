#include <stdio.h>
#include <string.h>

int main(){

    char name1[50], name2[50];
    int age1, age2;
    double media;

    printf("FIRST PERSON DATA \n");
    printf("Name: ");
    fgets(name1, 50, stdin);
    strtok(name1,"\n");

    printf("Age:: ");
    scanf("%d", &age1);
    getchar();
    
    printf("SECOND PERSON DATA \n");
    printf("Name: ");
    fgets(name2, 50, stdin);
    strtok(name2,"\n");

    printf("Age:: ");
    scanf("%d", &age2);
    
    media = (age1 + age2)/2.0;

    printf("The average age of %s and %s is %.1lf age.", name1, name2, media);

    return 0;
}
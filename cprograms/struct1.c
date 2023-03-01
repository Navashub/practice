#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char *name;
    int age;
    float weight;
}Mul;

int main(void)
{
    Mul Navas;
    Navas.name = "muller";
    Navas.age = 23;
    Navas.weight = 60.4;

    printf("%s\n", Navas.name);
    printf("%d\n", Navas.age);
    printf("%f\n", Navas.weight);
}
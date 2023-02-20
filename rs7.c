#include <stdio.h>

int main(void)
{
    int number = 7;
    char car[10] = "Audi";
    char i[3];
    i[0] = 'R';
    i[1] = 'S';
    i[2] = number;

    printf("%s %c%c%d\n",car, i[0], i[1], i[2]);

    return 0;
}
#include <stdio.h>

int main()
{
    int navas = 30;
    int *navas_pointer;

    navas_pointer = &navas;
    /*print memory address of navas*/
    printf("Memory address of navas is: %p\n", &navas);
    printf("Memory address of navas using pointer is: %p\n", navas_pointer);

    /*printing values of navas*/
    printf("The value of navas is: %d\n", navas);
    printf("The value of navas using pointer is %d\n : ", *navas_pointer);

    return 0;
}
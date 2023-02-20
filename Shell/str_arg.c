#include <stdio.h>
/**
main - a program to describe strings and arguments to main

Return: 0
*/
int main(int argc, char **argv)
{
    /* *av[] == **av 
    %s going to print till it hits the null termintor char *
    */

    printf("A program to demonstrate arguments to main\n");

    printf("Number of arguments with argc: %d\n", argc);
    printf("Argument vector: %s\n", av);

}
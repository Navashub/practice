#include "main.h"

int main(int ac, char **av)
{
    char *prompt = "ALX Buddy Group";
    char *lineptr;
    size_t n = 0;
    ssize_t nchars_read;

    //declaring void variables
    (void)ac; (void)av;

    while(1)
    {
        printf("%s", prompt);

        nchars_read = getline(&lineptr, &n, stdin);

        if (nchars_read == -1)
        {
            printf("Failed exiting shell...\n");
            return -1;
        }
        printf("%s", lineptr);

        free(lineptr);
    }
    return 0;
}
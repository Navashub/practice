#include "main.h"
// adding boiler plate to code

int main(int ac, char **argv)
{
    char *prompt = "(Kipkemoi)$";
    char *lineptr , *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    const char *delim = " \n";
    int i;
    int num_tokens;
    char *tokens;


    /*declaring void variables*/
    (void)ac; 

    /*create an infinite loop*/
    while(1){
    printf("%s", prompt);
    nchars_read = getline(&lineptr, &n, stdin);
    //check if getline failed
    if (nchars_read == -1)
    {
        printf("Exiting shell...\n");
        return(-1);
    }

    //allocates space for a copy the lineptr
    lineptr_copy = malloc(sizeof(char)* nchars_read);

    if (lineptr_copy == NULL)
    {
        perror("tsh: memory allocation error");
        return (-1);
    }

    //copy lineptr to lineptr_copy
    strcpy(lineptr_copy, lineptr);

    //calculate total number of tokens
    /*split the string (lineptr) into an array of words*/
    tokens = strtok(lineptr, delim);
    /*determine how many tokens are there*/
    while (tokens != NULL)
    {
        num_tokens++;
        tokens = strtok(NULL, delim);
    }
    num_tokens++;

    /*allocate space to hold array of string(token)*/
    argv = malloc(sizeof(char *) *num_tokens);

    /*store each token in the array*/
    tokens = strtok(lineptr_copy, delim);

    for (i=0; tokens != NULL; i++)
    {
        argv[i] = malloc(sizeof(char) * strlen(tokens));
        strcpy(argv[i], tokens);

        tokens = strtok(NULL, delim);
    }
    argv[i] = NULL;


    printf("%s\n", lineptr);

    //free up allocated memory
    free(lineptr);
    }
    return (0);
}
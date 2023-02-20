#include <unistd.h> //fork()
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    fork();
    printf("print pid of parent: %d\n", getpid());
    return 0; // success
}
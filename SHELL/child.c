#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int num1, num2, sum = 0;
    num1 = 2;
    num2 = 5;
    sum = num1 + num2;
    pid_t pid;
    pid = fork();

    printf("Sum is %d\n", sum);
    printf("pid is %d\n", pid);

    if (pid == -1)
            perror("error");
    else
            printf("Parent here");

    return 0;
}
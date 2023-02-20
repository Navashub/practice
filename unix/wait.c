#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    int status;


    pid = fork();
    if (pid == -1)
    {
        perror("fork error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        //child process
        printf("This is the child process: \n");
        exit(EXIT_SUCCESS);
    }
    else
    {
        //parent process continues
        printf("This is the parent process: \n");
        wait(&status);
        if (WIFEXITED(status)){
            printf("Child process exited with status: %d\n", WIFEXITED(status));
        }
        else
        {
            printf("Child process terminated abnormally: \n");
        }
    }
    return 0;

}
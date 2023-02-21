#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
//learning what are process IDs

int main(int argc, char* argv[])
{
    int id = fork();
    if (id == 0){
        sleep(1);
    }
    printf("Current ID: %d, Parent ID: %d\n", getpid(), getppid());

    int res = wait(NULL);
    if (res == -1)
    {
        printf("No children to wait for\n");
    }
    else
    {
        printf("%d Finished execution\n", res);
    }
    return 0;
}
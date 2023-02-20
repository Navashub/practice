#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
printf("Current process: %d\nParent process: %d\n", getpid(), getppid());

return 0;
}

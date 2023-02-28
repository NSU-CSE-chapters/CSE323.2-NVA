#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int pid = fork();

        if (pid == 0)
        {
            printf("child process. PPID = %d, PID= %d\n", getppid(), getpid());
            exit(0);
        }
        else
        {
            printf("Parent process. PPID= %d\n", getppid());
        }
    }

    return 0;
}
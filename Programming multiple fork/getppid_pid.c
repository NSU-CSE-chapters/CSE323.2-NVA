#include<stdio.h>
#include<unistd.h>

int main()
{
    int id = fork();
    int pid = getpid();

    printf("id = %d, pid = %d \n", id, pid);
}
#include<stdio.h>
#include<unistd.h>

int main()
{
    // int id;
    // int pid, ppid;
    // pid = getpid();
    // ppid = getppid();
   

    

    // // printf("fork is is : %d\n", id);
    // printf("parent process id = %d\n", ppid);
    // printf("child process id = %d\n", pid);

    // int id  = fork();
    int pid =  getppid();
    printf("%d\n", pid);
}
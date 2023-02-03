#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    printf("\n Before Fork\n PID:%d\t PPID:%d\n",getpid(),getppid());
    id = fork();
    printf("\n After Fork\n PID:%d\t PPID:%d\n",getpid(),getppid());

    if(id == 0)
     {
        printf("\n Child Process...\n");
     }
    else
     {
        printf("\n Parent Process...\n");
     } 
    return 0;
}

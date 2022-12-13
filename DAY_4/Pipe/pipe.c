#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main()
{
    pid_t id;
    char buff[128];
    int fd[2];

    pipe(fd);
    id = fork();
    if(id == 0)
     {                  //child process
        close(fd[1]);
        read(fd[0],buff,128);
        printf("\n Parent data: %s",buff);
        close(fd[0]);
     }
    else 
     {                  //parent process
        close(fd[0]);
        write(fd[1],"DESD\n",5);
        close(fd[1]); 
     }
}
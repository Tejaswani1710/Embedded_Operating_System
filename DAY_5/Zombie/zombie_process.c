#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char* argv[])
{
    pid_t id;
    printf("Before fork\n");
    printf("Child ID: %d\t Parent ID: %d\n",getpid(),getppid());
    id = fork();
    if(0 == id)
     {
        printf(".....child process....\n");
        printf("Child ID: %d\t Parent ID: %d\n",getpid(),getppid());
     }
    else
     {
        printf(".....Parent process....\n");
        printf("Child ID: %d\t Parent ID: %d\n",getpid(),getppid());
        sleep(10);
     }
return 0;
}      
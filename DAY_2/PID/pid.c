#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main()
{
    pid_t process_id;
    pid_t parent_id;

    process_id =  getpid();
    parent_id =  getppid();

    printf("\n Process ID: %d",process_id);
    printf("\n Parent ID: %d",parent_id);
}

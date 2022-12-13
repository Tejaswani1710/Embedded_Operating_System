#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int fd;
    ssize_t w;
    fd = open("DESD.txt",O_CREAT|O_WRONLY,S_IRUSR|S_IWUSR);
    if(-1 == fd)
     {
        perror("Error\n");
        exit(EXIT_FAILURE);
     }
    else
     {
        printf("sucessful creation of fd.\n");
     }
    w = write(fd,"Hello World!!!",14);
    if(-1 == w)
     {
        perror("Error\n");
        exit(EXIT_FAILURE);
     }
    else
     {
        printf("sucessfully written in fd.\n");
     }
    close(fd);
    return 0;
}   

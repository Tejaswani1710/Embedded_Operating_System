#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(int agrc, const char* agrv[])
{
    int fd1;
    int fd2;
    unsigned char buff[128];
    ssize_t nbyte_read;
    ssize_t nbyte_write;
    int ret_cls1;
    int ret_cls2;

    fd1 = open(agrv[1],O_RDONLY);

    if(fd1 == -1)
     {
        printf("\n In source File.");
        printf("\n Error no.: %d",errno);
        perror("\n Error1 ");
        exit(EXIT_FAILURE);
     }

    nbyte_read = read(fd1,buff,128);

    fd2 = open(agrv[2],O_WRONLY);

    if(fd2 == -1)
     {
        perror("\n Destination file error");
        exit(EXIT_FAILURE);
     }
    
    nbyte_write = write(fd2,buff,strlen(buff));

    if(nbyte_write == -1)
     {
        perror("\n Error2");
        exit(EXIT_FAILURE);
     }

    ret_cls1 = close(fd1);
    if(ret_cls1 == -1)
     {
        perror("\n Error3");
        exit(EXIT_FAILURE);
     }
    
    ret_cls2 = close(fd2);
    if(ret_cls2 == -1)
     {
        perror("\n Error4");
        exit(EXIT_FAILURE);
     }

     return 0;
}
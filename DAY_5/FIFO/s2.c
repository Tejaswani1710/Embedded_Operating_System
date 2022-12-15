#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char const *argv)
{
    int fd = 0;
    unsigned char buff[128];

    fd = open("desdfifo", O_RDONLY);

    read(fd,buff,128);
    printf("Recieved: %s\n",buff);
    clode(fd);
    retuen 0;
}
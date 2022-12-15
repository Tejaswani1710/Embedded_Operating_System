#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int fd = 0;
    fd = open("desdfifo", O_WRONLY);
    write(fd,"DESD FIFO\n",10);
    close(fd);
    return 0;
}

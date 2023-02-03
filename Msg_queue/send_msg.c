#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define BUFF_SIZE 64
char buff[BUFF_SIZE];
struct mq_attr desd_mq_attr;

int main()
{
    mqd_t desd_mq_desc; 
    
    /*these are the members of structure which are define in mq_open*/
    desd_mq_attr.mq_flags = 0;
    desd_mq_attr.mq_maxmsg = 5;     /*max. msg on queue*/
    desd_mq_attr.mq_msgsize = 64;   /*msg size in byte*/ 
    desd_mq_attr.mq_curmsgs = 0;    /*msg'es currently in queue*/
    
    int mq_send_er, mq_close_er;

    desd_mq_desc = mq_open("/DESD_mq",O_CREAT|O_RDWR, S_IRUSR|S_IWUSR, &desd_mq_attr);
    if(-1 == desd_mq_desc)
     {
        perror("Error in mq_open :(\n");
        exit(EXIT_FAILURE);
     }
    mq_send_er = mq_send(desd_mq_desc,"Teju",4,0);
    if(-1 == mq_send_er)
     {
        perror("Error in mq_send :(\n");
        exit(EXIT_FAILURE);
     }
    else
        printf("Data send successfully 😄\n");
    mq_close_er = mq_close(desd_mq_desc);
    if(-1 == mq_close_er)
     {
        perror("Error in mq_close 🤕\n");
        exit(EXIT_FAILURE);
     }

    return 0;
}
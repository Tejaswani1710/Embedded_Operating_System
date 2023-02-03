#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int count = 0;

void *inc(void *data)
{
    while(count<10000)
     {
        count++;
        printf("Inc: %d\n",count);
     }
    sleep(1);
}

void *dec(void *data)
{
    while(count>0)
     {
        count--;
        printf("Dec: %d\n",count);
     }
    sleep(3);
}

int main(void)
{
    pthread_t thread_inc, thread_dec;
    printf("In main\n");
    printf("Before thread\n");
    pthread_create(&thread_inc,NULL,inc,NULL);
    pthread_create(&thread_dec,NULL,dec,NULL);
    pthread_join(thread_inc,NULL);
    pthread_join(thread_dec,NULL);
    printf("After thread\n");
    return 0;
}
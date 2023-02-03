#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int count = 0;
pthread_mutex_t lock;
void *inc_Thread(void *data)
{
    
    while(1)
     {
        pthread_mutex_lock(&lock);
        count++;
        printf("Inc: %d\n",count);
        pthread_mutex_unlock(&lock);
     }
}


void *dec_Thread(void *data)
{
    
    while(1)
     {
        pthread_mutex_lock(&lock);
        count--;
        printf("Dec:-  %d\n",count);
        pthread_mutex_unlock(&lock);
     }
}
int main(void)
{
    pthread_t incID,decID;
    
    // pthread_attr_t thread_attr;
    // pthread_attr_init(&pthread_attr);
    // pthread_attr_setdetachstate(&thread_attr, PTHREAD_CREATE_DETACHED);
    pthread_mutex_init(&lock,NULL);
    pthread_create(&incID,NULL,inc_Thread,NULL);
    pthread_create(&decID,NULL,dec_Thread,NULL);
    sleep(1);
    pthread_mutex_destroy(&lock);
    return 0;
}
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count = 0;
pthread_mutex_t lock;
pthread_mutexattr_t mutexat;

void *inc_thread(void *data)
{
    while(1)
     {
        pthread_mutex_lock(&lock);
        pthread_mutex_lock(&lock);
        count++;
        printf("Inc: %d\n",count);
        pthread_mutex_unlock(&lock);
        pthread_mutex_unlock(&lock);
     }
}

void *dec_thread(void *data)
{
    while(1)
     {
        pthread_mutex_lock(&lock);
        count--;
        printf("Dec:- %d\n",count);
        pthread_mutex_unlock(&lock);
     }
}

int main()
{
    pthread_t incID, decID;
    pthread_mutexattr_init(&mutexat);
    pthread_mutexattr_settype(&mutexat,PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&lock,&mutexat);
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    sleep(1);
    pthread_mutex_destroy(&lock);
    return 0;
}
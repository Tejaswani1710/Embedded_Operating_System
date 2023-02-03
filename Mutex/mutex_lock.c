#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count = 0;
pthread_mutex_t lock;

void *inc_thread(void *data)
{
    while(1)
     {
        pthread_mutex_lock(&lock);
        count++;
        printf("Inc: %de\n",count);
        pthread_mutex_unlock(&lock);
     }
}

void *dec_thread(void *data)
{
    while(1)
     {
        pthread_mutex_lock(&lock);
        count--;
        printf("Dec: %d\n",count);
        pthread_mutex_unlock(&lock);
     }
}

int main()
{
    pthread_t incID, decID;
    pthread_attr_t thread_attr;
    pthread_mutex_init(&lock,NULL);
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    sleep(1);
    pthread_join(incID,NULL);
    pthread_join(decID,NULL);
    pthread_mutex_destroy(&lock);

    return 0;
}
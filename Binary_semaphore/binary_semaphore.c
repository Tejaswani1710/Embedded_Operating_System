#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

int count = 0;
sem_t sem_lock;

void *inc_thread(void *data)
{
    while(1)
     {
        sem_wait(&sem_lock);
        count++;
        printf("Inc: %d\n",count);
        sem_post(&sem_lock);
     }
}

void *dec_thread(void *data)
{
    while(1)
     {
        sem_wait(&sem_lock);
        count--;
        printf("Dec:- %d\n",count);
        sem_post(&sem_lock);
     }
}

int main()
{
    pthread_t incID, decID;
    sem_init(&sem_lock,0,1);
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    sleep(1);
    pthread_join(incID,NULL);
    pthread_join(decID,NULL);

    return 0;
}
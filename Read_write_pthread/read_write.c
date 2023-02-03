#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a,b;
pthread_rwlock_t rw_lock;

void *inc_thread(void *data)
{
    pthread_rwlock_wrlock(&rw_lock);
    printf("Enter the values of a and b: \n");
    scanf("%d %d",&a,&b);
    pthread_rwlock_unlock(&rw_lock);
    sleep(2);
}

void *dec_thread(void *data)
{
    pthread_rwlock_wrlock(&rw_lock);
    printf("Values are: %d, %d\n",a,b);
    pthread_rwlock_unlock(&rw_lock);
    sleep(1);
}

void *thread3(void *data)
{
    while(1)
     {
        pthread_rwlock_rdlock(&rw_lock);
        printf("in thread 3 the values are: %d %d\n ",a,b);
        pthread_rwlock_unlock(&rw_lock);
        sleep(1);
     }
}

int main()
{
    pthread_t incID,decID,th3;
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_join(incID,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    pthread_join(decID,NULL);
    pthread_create(&th3,NULL,thread3,NULL);
    pthread_join(th3,NULL);
    sleep(1);
    pthread_rwlock_destroy(&rw_lock);

    return 0;
}
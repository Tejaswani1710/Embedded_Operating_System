/**/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *add(void *data)
{
    printf("Inside thread..\n");
    int a=10, b=20;
    int c = a+b;
    printf("Value of c is %d.\n",c);
    sleep(5);
}

int main(void)
{
    pthread_t thread_1;
    printf("In main\n");
    printf("Before thread\n");
    pthread_create(&thread_1,NULL,add,NULL);
    pthread_join(thread_1,NULL);
    printf("After thread\n");
    return 0;
}
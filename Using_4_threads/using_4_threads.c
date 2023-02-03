#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *sum(void *data)
{
    printf("Thread 1\n");
    int a=10 ,b=20;
    int c=a+b;
    printf("Addition is %d.\n",c);
    sleep(2);
}

void *diff(void *data)
{
    printf("Thread 2\n");
    int a=10 ,b=20;
    int c=a-b;
    printf("Substraction is %d.\n",c);
    sleep(2);
}

void *product(void *data)
{
    printf("Thread 3\n");
    int a=10 ,b=20;
    int c=a*b;
    printf("Multiplication is %d.\n",c);
    sleep(2);
}

void *div(void *data)
{
    printf("Thread 4\n");
    int a=20 ,b=10;
    int c=a/b;
    printf("Quotient is %d.\n",c);
    sleep(2);
}

int main(void)
{
    pthread_t thread_sum, thread_diff, thread_pro, thread_div;
    printf("In main\n");
    printf("Before thread\n");
    pthread_create(&thread_sum,NULL,sum,NULL);
    pthread_join(thread_sum,NULL);
    pthread_create(&thread_diff,NULL,diff,NULL);
    // pthread_join(thread_diff,NULL);
    pthread_create(&thread_pro,NULL,product,NULL);
    // pthread_join(thread_pro,NULL);
    pthread_create(&thread_div,NULL,div,NULL);
    // pthread_join(thread_div,NULL);
    printf("After thread\n");
    return 0;


}
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_barrier_t barrier4;

void *lcd(void *data)
{
    printf("LCD: Init start\n");
    sleep(2);
    printf("LCD: Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("LCD: Functionality_start\n");
}

void *serial(void *data)
{
    printf("Serial: Init_start\n");
    sleep(7);
    printf("Serial: Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("Serial: Functionality_start\n");
}

void *temp(void *data)
{
    printf("Temp: Init_start\n");
    sleep(5);
    printf("Temp: Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("Temp: Functionality_start\n");
}

void *network(void *data)
{
    printf("N/W: Init_start\n");
    sleep(10);
    printf("N/W: Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("N/W: Functionality_start\n");
}

int main()
{
    pthread_t lcd_id, serial_id, temp_id, netw_id;

    pthread_barrier_init(&barrier4,NULL,4);

    pthread_create(&lcd_id,NULL,lcd,NULL);
    pthread_create(&serial_id,NULL,serial,NULL);
    pthread_create(&temp_id,NULL,temp,NULL);
    pthread_create(&netw_id,NULL,network,NULL);

    pthread_join(lcd_id,NULL);
    pthread_join(serial_id,NULL);
    pthread_join(temp_id,NULL);
    pthread_join(netw_id,NULL);

    pthread_barrier_destroy(&barrier4);

    return 0;
}
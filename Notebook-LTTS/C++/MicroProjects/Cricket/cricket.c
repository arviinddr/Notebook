#include<pthread.h>
#include <unistd.h>
#include <semaphore.h> 
#include <unistd.h> 
#include <sys/ipc.h>
#include <sys/msg.h>

#include<stdio.h>
#include<stdlib.h>
#include "Fielding.h"
#include "Bowling.h"

void* task_body();
void* task_body2();
void* task_body3();
void* task_body4();
sem_t mutex;

void* task_body()
{
    sem_wait(&mutex);
    printf("Baller is balling\n");
        passer();
       sem_post(&mutex);
    return NULL;
}
void* task_body2()
{
    sem_wait(&mutex);
        sleep(1);
        printf("Batsman is striking \n");
        receiver();
        sleep(3);
    	printf("Fielder is fielding\n");
        passer();
    sem_post(&mutex);
    return NULL;
    EXIT_SUCCESS;
}
void* task_body3()
{
    sem_wait(&mutex);
        sleep(1);
        printf("3rd fielder received from 2nd fielder\n");
        receiver();
        sleep(3);
    	printf("3rd fielder passing the ball to 1st fielder\n");
        passer();
    sem_post(&mutex);
    return NULL;
    EXIT_SUCCESS;
}
void* task_body4()
{
    sem_wait(&mutex);
        sleep(1);
        printf("1st person RECEIVED the ball from 3rd person\n");
        receiver();
        printf("Passing Complete\n");
    sem_post(&mutex);
    return NULL;
    EXIT_SUCCESS;
}

int main(void)
{

    sem_init(&mutex,0,1);
    pthread_t thread[4];
    pthread_create(&thread[0], NULL, task_body, NULL);
    pthread_create(&thread[1], NULL, task_body2, NULL);
    pthread_create(&thread[2], NULL, task_body3, NULL);
    pthread_create(&thread[3], NULL, task_body4, NULL);
    pthread_join(thread[0],NULL);
    pthread_join(thread[1],NULL);
    pthread_join(thread[2],NULL);
    pthread_join(thread[3],NULL);
    pthread_exit(NULL);
    sem_destroy(&mutex);
    return EXIT_SUCCESS;
}



#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define THREAD_NUM 100

pthread_t thread[THREAD_NUM];
volatile int count = 0;
pthread_mutex_t lock;

void* getUp(void* argp){
    
    for (int i = 0; i < 1000; i++){
        pthread_mutex_lock(&lock);
        count++;
        pthread_mutex_unlock(&lock);
    }

}

int main(){
    

    clock_t begin = clock();
    for (int i = 0; i < THREAD_NUM; i++){

        pthread_create(&thread[i], NULL, getUp, (void*)&thread[i]);
    }

    for (int i = 0; i < THREAD_NUM; i++){

        pthread_join(thread[i], NULL);
    }
    
    clock_t end = clock();
    double timer = ((double)(end-begin)) / CLOCKS_PER_SEC;

    printf("This run timed to: %f\n", timer);
    printf("They \"Got up\": %d times\n", count);
}


#include <pthread.h>
#include <stdio.h>

int i = 0;
static pthread_mutex_t i_mutex = PTHREAD_MUTEX_INITIALIZER;

// Note the return type: void*
void* incrementingThreadFunction(){
  pthread_mutex_lock(&i_mutex);
  printf("Lock increment\n");
    for (int j = 0; j < 1000000; j++) {
      i++;
    }
    pthread_mutex_unlock(&i_mutex);
    printf("Unlock increment\n");
    return NULL;
}

void* decrementingThreadFunction(){
  pthread_mutex_lock(&i_mutex);
  printf("Lock decrement\n");
    for (int j = 0; j < 1000000; j++) {
       i--;
    }
    pthread_mutex_unlock(&i_mutex);
    printf("Unlock decrement\n");
    return NULL;
}


int main(){
    pthread_t incrementingThread, decrementingThread;

    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);

    printf("The magic number is: %d\n", i);
    pthread_mutex_destroy(&i_mutex);
    return 0;
}

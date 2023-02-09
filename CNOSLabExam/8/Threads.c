#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
void *thread(void *a)
{
    printf("\nEntered thread\n");
    sleep(4);
    printf("\nExit thread\n");
}
int main()
{
    pthread_t t1, t2;
    pthread_create(&t1, NULL, thread, NULL);
    pthread_create(&t2, NULL, thread, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
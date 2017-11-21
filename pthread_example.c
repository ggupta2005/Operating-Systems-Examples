/*
 * This is a sample C-program using linux POSIX threads and usage of 
 * mutexes over global variables.
 */
#include<pthread.h>
#include<stdio.h>

/*
 * Maximum number of threads
 */
#define MAX_THREADS 5

int     count = 0; // Global variable across threads
pthread_mutex_t count_mutex; // Mutex to guard the global variable
pthread_rwlock_t count_lock; // Read-write lock to guard the global 
                             // variable

/*
 * Thread function 
 */
void *inc_count(void *t) 
{
    /* Lock the mutex */
    pthread_mutex_lock(&count_mutex);

    /* Take the read-write lock */
    //pthread_rwlock_wrlock(&count_lock);

    /* Increment the global count */
    ++count;
    printf("The value of count is %d\n", count);

    /* Release the read-write lock */
    //pthread_rwlock_unlock(&count_lock);

    /* Un-lock the mutex */
    pthread_mutex_unlock(&count_mutex);
}

int main ()
{
    int index;
    pthread_t threads[MAX_THREADS];

    /* Initialize the mutex */
    pthread_mutex_init(&count_mutex, NULL);

    /* Initialize the read-write lock */
    //pthread_rwlock_init(&count_lock, NULL);

    /* Create POSIX threads with a thread function */
    for (index = 0; index < MAX_THREADS; ++index) {
        pthread_create(&threads[index], NULL, inc_count, NULL);
    }

    /* Wait for the POSIX threads to finish thread function */
    for (index = 0; index < MAX_THREADS; ++index) {
        pthread_join(threads[index], NULL);
    }

    return(0);
}

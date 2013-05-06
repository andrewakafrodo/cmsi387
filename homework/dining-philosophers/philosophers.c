#include <pthread.h>
#include <semaphore.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define NUM 5
#define TRUE 1
#define FALSE !TRUE
#define HUNGRY 0
#define EATING 1
#define THINKING 2 

int philosopher_number[NUM];
int philosopher_state[NUM];
int chopstick_state[NUM];
pthread_mutex_t chopsticks[NUM];

/**
 * This is taken from GitHub user Dondi's bounder buffer code.
 */

int randomWait(int bound) {
    int wait = rand() % bound;
    sleep(wait);
    return wait;
}

/**
 *  This lets our philosphers get a chopstick.
 */ 
void getChopstick (int chopstick) {
	pthread_mutex_lock(&chopsticks[chopstick]);
	chopstick_state[chopstick] += 1;
}

/**
 *  This lets our philosphers release a chopstick.
 */ 

void releaseChopstick (int chopstick) {
	chopstick_state[chopstick] -= 1;
	pthread_mutex_unlock(&chopsticks[chopstick]);

}

/**
 *  This function will let our philosphers philosophize (eating and thinking).
 */ 

void* philosophize (int philosopher) {

	while (TRUE) {
		if (philosopher_state[philosopher] == THINKING) {
			randomWait(10);
			philosopher_state[philosopher] = HUNGRY;
		} else if (philosopher_state[philosopher] == HUNGRY) {
			getChopstick(philosopher);
			getChopstick(philosopher + 1);
			randomWait(10);
		} else {
			releaseChopstick(philosopher);
			releaseChopstick(philosopher + 1);
		}
		
	}

}

/**
 *	Main method to create all of the threads and run them.
 */

int main () {

	/* Reusable i and our threads. */
	int i;
	pthread_t philosphers[NUM];

	/* Let us initialize the mutexes. */
	for (i = 0; i < NUM; i++) {
		philosopher_state[i] = THINKING;
		philosopher_number[i] = i;
		chopstick_state[i] = 0;
		pthread_mutex_init(&chopsticks[i], NULL);
		pthread_create(&philosphers[i], NULL, (void *) &philosophize, (void *) philosopher_number[i]);
	}

	/* Let us join the threads, even though we never get here. */
	for (i = 0; i < NUM; i++) {
		pthread_join(philosphers[i], NULL);
	}

	/* We shouldn't ever get here, but let us make the compiler happy. */
	return 0;

}
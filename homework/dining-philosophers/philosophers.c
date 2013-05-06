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

void getChopsticks (int philosopher);
void releaseChopsticks (int philosopher);
int philosopher_number[NUM];
int philosopher_state[NUM];
int chopstick_state[NUM];
pthread_mutex_t chopsticks[NUM];

/**
 *  This lets our philosphers eat. They get the chopsticks and then commence eating.
 */ 

void eat (int philosopher) {

	getChopsticks(philosopher);
	randomwait(10);
	releaseChopsticks(philosopher);

}

/**
 *  This lets our philosphers "think". This is taken from GitHub user Dondi's bounder buffer code.
 */ 

void think (int bound) {
	randomwait(10);
}

/**
 * This is taken from GitHub user Dondi's bounder buffer code.
 */

int randomwait(int bound) {
    int wait = rand() % bound;
    sleep(wait);
    return wait;
}

/**
 *  This lets our philosphers get the chopsticks.
 */ 

void getChopsticks (int philosopher) {



}

/**
 *  This lets our philosphers release the chopsticks.
 */ 

void releaseChopsticks (int philosopher) {


}

/**
 *  This function will let our philosphers philosophize (eating and thinking).
 */ 

void philosophize (int philosopher) {

	while (TRUE) {
		think(philosopher);
		eat(philosopher);
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
		pthread_create(&philosphers[i], NULL, philosophize, philosopher_number[i]);
	}

	/* Let us start the threads. */
	for (i = 0; i < NUM; i++) {
		pthread_join(&philosphers[i], NULL);
	}

	/* We shouldn't ever get here, but let us make the compiler happy. */
	return 0;

}
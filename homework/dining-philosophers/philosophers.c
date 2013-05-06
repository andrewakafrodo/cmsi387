#include <pthread.h>
#include <semaphore.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define NUM 5

pthread_mutex_t chopsticks[NUM];

void eat (int id) {

	getLeftChopstick();
	getRightChopstick();
	nom nom nom
	releaseLeftChopstick();
	releaseRightChopstick();

}

void think (int id) {

	what is life?

}

void getLeftChopstick (int id) {

	if (left chops stick available) {
		get it!
	} if not {
		try again in a bit;
	}

}

void getRightChopstick (int id) {

	if (right chop stick available) {
		get it!
	} if not {
		try again in a bit;
	}

}

void releaseLeftChopstick (int id) {

	release the left chopstick

}

void releaseRightChopstick (int id) {

	release the right chopstick

}

void philosophize (int id) {

	while (true) {
		think ();
		eat();
	}

}

int main () {

	/* Reusable i, integer array for id, and our threads. */
	int i, id[NUM];
	pthread_t tid[NUM];

	/* Let us initialize the mutexes. */
	for (i = 0; i < NUM; i++) {
		pthread_mutex_init(chopsticks[i], 0);
	}

	/* Let us start the threads. */
	for (i = 0; i < NUM; i++) {
		pthread_create(tid, NULL, philosophize, id)
	}


	/* We shouldn't ever get here, but let us make the compiler happy. */
	return 0;

}
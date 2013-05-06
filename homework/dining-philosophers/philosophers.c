#include <pthread.h>
#include <semaphore.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

pthread_mutex_t chopsticks;

void eat (int id) {

	nom nom nom

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

		sem_init(&mutex, 0, 1);

	createPhilosophers();
	createChopsticks();


	pthread_create(&chopsticks, Null, )

	while (true) {
		philosophize;
	}

	/* We shouldn't ever get here, but let us make the compiler happy. */
	return 0;

}
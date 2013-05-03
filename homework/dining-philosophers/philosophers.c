#include <pthread.h>
#include <semaphore.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void eat () {

	nom nom nom

}

void think () {

	what is life?

}

void getLeftChopstick () {

	if (left chops stick available) {
		get it!
	} if not {
		try again in a bit;
	}

}

void getRightChopstick () {

	if (right chop stick available) {
		get it!
	} if not {
		try again in a bit;
	}

}

void putLeftChopstick () {

	releaseLeftChopstick();

}

void putRightChopstick () {

	releaseRightChopstick();

}

void philosophize () {

	while (true) {
		think ();
		getLeftChopstick();
		getRightChopstick();
		eat();
		putLeftChopstick();
		putRightChopstick();
	}

}

int main () {

	createPhilosophers();
	creatChopsticks();

	while (true) {
		philosophize;
	}

}
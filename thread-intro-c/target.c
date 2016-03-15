/*
 * @author  :  Rajan Khullar
 * @created :  03/13/16
 * @updated :  03/13/16
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>	// POSIX Thread
#include <semaphore.h>

#define THREAD_LOOP	10
#define MAIN_LOOP	8
#define SECOND		1000000

// thread function
void *doit(void *arg)
{
	int i = 0;
	while(i < THREAD_LOOP)
	{
		printf("thread\n");
		usleep(rand() % SECOND);
		i++;
	}
	return 0;
}

int main()
{
	// create the thread
	pthread_t pth;
	pthread_create(&pth, NULL, doit, 0);

	int i = 0;
	while(i < MAIN_LOOP)
	{
		printf("main\n");
		usleep(rand() % SECOND);
		i++;
	}

	// join thread
	pthread_join(pth, NULL);
	return 0;
}

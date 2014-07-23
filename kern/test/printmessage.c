#include <types.h>
#include <lib.h>
#include <test.h>
#include <thread.h>
#include <curthread.h>
#include "printmessage.h"

static
void
threadtestfunction(void *poionterplaceholder, unsigned long longplaceholder) {}

int
printmessage() {
	char name[16];
	int threadforktest;
	
	snprintf(name, sizeof(name), "name");
	threadforktest = thread_fork(name, NULL, 1, threadtestfunction, NULL);
	kprintf("thread id/name: %s\n", name);

	if (threadforktest)
		panic("printmessage: thread_fork failed %s \n", strerror(threadforktest));

	return 0;
}


/* Function from thread.h used for reference when editing this file to spawn another thread and print its id/name. */

/*
int
thread_fork(const char *name, 
		void *data, unsigned
		long data2, 
		void  (*func) (void *, unsigned long)
		struct thread **ret)

;
*/

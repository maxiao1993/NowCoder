#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#define STDOUT_FILENO 1

int 	globvar = 6;

int
main(vid)
{
	int 	var;
	pid_t 	pid;

	var = 88;

	printf("Before vfork\n");

	if((pid = vfork()) < 0)
	{
		printf("vfork error\n");
		exit(1);
	}else if (pid == 0)
	{
		globvar++;
		var++;
		exit(0);
	}

	printf("pid = %ld, glob = %d, var = %d\n",(long)getpid(),globvar,var);
	exit(0);
}

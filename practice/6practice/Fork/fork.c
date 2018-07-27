#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#define STDOUT_FILENO 1

int 	globvar = 6;
char buf[] = "a write to stdout\n";

int
main(vid)
{
	int 	var;
	pid_t 	pid;

	var = 88;
	if(write(STDOUT_FILENO,buf,sizeof(buf)-1) != sizeof(buf)-1)
	{
		printf("write error\n");
		exit(1);
	}

	printf("Before fork\n");

	if((pid = fork()) < 0)
	{
		printf("fork error\n");
		exit(1);
	}else if (pid == 0)
	{
		globvar++;
		var++;
	}else
	{
		sleep(2);
	}

	printf("pid = %ld, glob = %d, var = %d\n",(long)getpid(),globvar,var);
	exit(0);
}

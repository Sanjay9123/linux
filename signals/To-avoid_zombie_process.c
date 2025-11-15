#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void isr(int n)
{
	int j;
	wait(&j);
	printf("child is completed ");
	printf(" %d\n",j>>8);
}


int main()
{
	signal(SIGCHLD,isr);
	if(fork()==0)
	{
		sleep(10);
		exit(9);
	}
	else
	{
		while(1);
	}
}




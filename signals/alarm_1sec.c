#include<stdio.h>
#include<unistd.h>
#include<signal.h>


void ISR(int n)
{
	printf("%d",n);
	alarm(1);
	printf("%d-second\n",a++);	
}
int main()
{
	signal(14,ISR);
	alarm(1);
	while(1);
}

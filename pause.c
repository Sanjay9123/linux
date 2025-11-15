#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void isr()
{
	printf("in isr\n");
	signal(SIGQUIT,SIG_DFL);
}
int main()
{
	signal(SIGQUIT,isr);
	printf("program is paused\n");
	int r=pause();
	printf("program is resumed\n");
	printf("return value of pause() is %d\n ",r);
	while(1);


}

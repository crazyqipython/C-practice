#include <stdio.h>


int main()
{
	printf("befor my pid is %d\n", getpid() );
	fork();
	fork();
	fork();
	printf("my pid is %d\n", getpid() );
}
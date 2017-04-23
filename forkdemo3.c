#include <stdio.h>

int main(){
	int fork_rv;
	printf("before:my pid is %d\n",getpid());
	fork_rv = fork();
	if(fork_rv == -1)
		perror("fork");
	else if (fork_rv==0)
		printf("I am the child");
	else
		printf("I am the parent");
}

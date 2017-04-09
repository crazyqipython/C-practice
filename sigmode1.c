#include <stdio.h>
#include <signal.h>

int main(){
	void f(int);
	int i;
	signal(SIGINT,f);
	for(i=0;i<10;i++){
		printf("Hello\n");
		sleep(1);
	}
	return 0;
}


void f(int signum){
	printf("ouch!\n");
}

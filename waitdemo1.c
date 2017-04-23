#include <stdio.h>
#include <stdlib.h>

#define DELAY 2

main(){
	int newpid;
	void child_code();
	void parent_code();
	
	printf("before:my pid is %d\n",getpid());
	
	if((newpid =fork())==-1)
		perror("fork");
	else if (newpid==0)
		child_code(DELAY);
	else
		parent_code(newpid);
}


void child_code(int delay){
	printf("child %d here,will sleep for %d\n",getpid(),delay);
	sleep(delay);
	printf("child done.about to exit\n");
	exit(17);
}

void parent_code(int childpid){
	int wait_rv;
	wait_rv = wait(NULL);
	printf("done waiting for %d,Wait returned: %d\n",childpid,wait_rv);
}

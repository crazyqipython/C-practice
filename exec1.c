#include <stdio.h>

int main(){
	char *arglist[3];
	arglist[0] = " ";
	arglist[1] ="-l";
	arglist[2]= 0;
	printf("*** About to exec ls -l \n");
	execvp("s",arglist);
	printf("**** ls is done.bye\n");
	return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

main(){
	int len,i,apipe[2];
	char buf[BUFSIZ];
	
	if(pipe(apipe)==-1){
		perror("could not make pipe");
		exit(1);
	}

	printf("got a pip !it is file descriptors:{%d %d}\n",apipe[0],apipe[1]);

	while(fgets(buf,BUFSIZ,stdin)){
		len = strlen(buf);
		if(write(apipe[1],buf,len)!=len){
			perror("writing to pip");
			break;
		}
		for(i=0;i<len;i++)
			buf[i]='X';
		len=read(apipe[0],buf,BUFSIZ);
		if(len==-1){
			perror("read from pip");
			break;
		}

		if(write(1,buf,len)!=len){
			perror("writing to stdout");
			break;
		}
	}
}

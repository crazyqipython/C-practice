#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int size=1024;
	char *buff=(char *) malloc(size);

	while(NULL!=gets(buff)){
			printf("Read line with len:%d\n",strlen(buff));
			printf("%s",buff);
	}
	free(buff);
}

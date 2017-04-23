#include <stdio.h>

int main(void){
	char ch;
	int num;
	num =0;
	printf("input your string:\n");
	while((ch=getchar())!='\n'){
		printf("%c",ch);
		num++;
	}
	printf("nThe string length is %d\n",num);
	return 0;
}

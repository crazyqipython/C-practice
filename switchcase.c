#include <stdio.h>
int i=1;
int main(){
switch(i+1)
{
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
	case 2:
		printf("2");
	default:
		printf("default");
}
}

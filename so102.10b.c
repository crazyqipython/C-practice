#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>

int main(){
	uid_t id;
	struct passwd *p;
	id = geteuid();
	p = getpwuid(id);
	printf("%s\n",p->pw_name);
}

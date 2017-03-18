#include <sys/stat.h>
#include <stdio.h>
int main()
{
	struct stat infobuf;              /* place to store info */

	if ( stat( "/etc/passwd", &infobuf) == -1 )  /* get info */
		perror("/etc/passwd");
	else
		printf(" The size of /etc/passwd is %d\n", infobuf.st_size );
}

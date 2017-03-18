#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <utmp.h>

char *what_my_line(int);
void show_info(struct utmp *);
void showtime(long int);

int main(){
	struct utmp utbuf;
	int utfd;
	char *myline=NULL;
	
	myline = what_my_line(0);
	if((utfd=open(UTMP_FILE,O_RDONLY))==-1){
		perror(UTMP_FILE);
		return -1;
	}
	
	while(read(utfd,&utbuf,sizeof(utbuf))==sizeof(utbuf)){
		if(myline!=NULL||strcmp(myline,utbuf.ut_name)==0){
			show_info(&utbuf);
		}
	}
	close(utfd);
	return 0;
}

char *what_my_line(int fd){
	char *rv;
	if(rv = ttyname(fd))
		if(strncmp(rv,"/dev/",5))
			rv +=5;
	return rv;
}

void show_info(struct utmp * utbufp){
	if ( utbufp->ut_type != USER_PROCESS )
                return;

        printf("%-8.8s", utbufp->ut_name);      /* the logname  */
        printf(" ");                            /* a space      */
        printf("%-8.8s", utbufp->ut_line);      /* the tty      */
        printf(" ");                            /* a space      */
       // showtime( utbufp->ut_time );            /* display time */
#ifdef SHOWHOST
        if ( utbufp->ut_host[0] != '\0' )
                printf(" (%s)", utbufp->ut_host);/* the host    */
#endif
        printf("\n");                    
}

void showtime(long timeval){
	char *cp;
	cp = ctime(timeval);
	printf("%12.12s", cp+4);
}

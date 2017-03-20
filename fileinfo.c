#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

void show_stat_info(char * ,struct stat *);

int main(int ac,char *av[]){
	struct stat info;
	if(ac>1)
		if(stat(av[1],&info)!=-1){
			show_stat_info(av[1],&info);
			return 0;
		}
		else
			perror(av[1]);
	return 0;
}

void show_stat_info(char *fname,struct stat *buf){
		
	}



#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>

void do_ls(char []);

int main(int ac,char*av[]){
	if(ac==1)
		do_ls(".");
	else{
		while(--ac){
			printf("%s:\n",*++av);
			do_ls(*av);
		}
	}
}

void do_ls(char dirname[]){
	struct dirent *dirp;
	DIR * dir_pt;
	if((dir_pt=opendir(dirname))==NULL){
		perror("can't open");
	}
	else{
		while((dirp = readdir(dir_pt))!=NULL){
			printf("%s \n",dirp->d_name);
		}
		closedir(dir_pt);
	}
}

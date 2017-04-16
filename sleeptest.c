#include <stdio.h>
#include <time.h>
#include <signal.h>

#define DIAPAUSE 30    //sleep time 30s
#define TIMEOUT 5

void sigalrm(int signo);

 int main()
 {
         struct sigaction sa;

         sa.sa_handler = sigalrm;
         sa.sa_flags = 0;
         sigemptyset(&sa.sa_mask);
         if(sigaction(SIGALRM, &sa, NULL) < 0)
         {
                 printf("sigaction error!\n");
                 return;
         }

         while(1)
        {
                 printf("alarm(TIMEOUT)...\n");
                 alarm(TIMEOUT);
                 printf("...\n");
                 printf("sleep(DIAPAUSE) == %d\n", sleep(DIAPAUSE));
         }

         return 0;
 }

 void sigalrm(int signo)
 {
         printf("timeout...\n");
         return;
 }

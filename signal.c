#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

// Matthew Zhu, Stephan Doan

void sigHandle(int sigNum){
  if(sigNum ==SIGINT){
    printf("SIGINT needs me, I'm out\n");
    exit(0);
  }
  if(sigNum == SIGUSR1){
    printf("My parent PID: %d\n",getppid());
  }
}
int main(){
  signal(SIGINT,sigHandle);
  signal(SIGUSR1,sigHandle);
  while(1){
    printf("Gotta catch em PID: %d\n",getpid());
    sleep(1);
  }
  return 0;
}

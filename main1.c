// Ilustracja działania funkcji execl – uruchomienie programu potomny 
#include <stdio.h> 
//#include <process.h> 
#include <unistd.h> 
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

void main(int argc, char* argv[]){ 
  int pid,status,i,j;
for(i=0;i<argc-1 ;i++)
{ 
  if((pid = fork()) == 0) { /* Proces potomny pot ---*/ 
     printf("potomny = %d \n",getpid()); 
	for(j=i;j < atoi(argv[i+1]);++j){
		printf("potomny = %d ,krok %d \n",getpid(), j);
}
     exit(i);
 			  }   
 /* Proces macierzysty */ 
}
	printf("Macierzysty = %d \n",getpid()); 
for(i=0;i<argc-1 ;i++){
	pid = wait(&status);
	printf("Proces %d zakończony status: %d\n",pid,status/256); 
			  }
      
 
} 

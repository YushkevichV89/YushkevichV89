#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
  int rv;
  switch(rv=fork())
  case -1:
          perror("fork"); 
          return 1;
  case 0:
          if(execvp(argv[1], &argv[2]==-1)){
		     perror("error");
			 return 1;
		  };
		  break;
  default:
          if (wait(&rv)>=0)
            printf("PARENT:", WEXITSTATUS(rv));
		  break;
          
  }
  return 0;
}

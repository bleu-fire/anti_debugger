#include <sys/ptrace.h>
#include <sys/wait.h>
#include <errno.h>




void  process_attach (pid_t  pid){
   if(ptrace(PTRACE_ATTACH ,pid,0,0 ) == -1){
    
      perror("the wait ");
      

   }
   waitpid(pid . 0 , 0);

   waitpid("process %d" ,pid);
   
}

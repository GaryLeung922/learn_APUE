#include "apue.h"
#include <sys/wait.h>
#include <fcntl.h>

char *env_init[] = {"USER=unknown","PATH=/tmp",NULL};

int main(){
    pid_t pid;
    if((pid=fork())<0){
        err_sys("fork error");
    }else if(pid==0){
        if(execle("/home/gopher/cpp/APUE/echoall.out","echoall.out","myarg1","MY ARGV2",(char *)0,env_init)<0){
            err_sys("execle error");
        }
        //printf("cwd: %s\n",cwd);
    }

    if(waitpid(pid,NULL,0)<0){
        err_sys("wait error");
    }
    if((pid=fork())<0){
        err_sys("fork error");
    }else if(pid==0){
        char *cwd;
        getcwd(cwd,1000);
        printf("cwd: %s\n",cwd);
        int fd;
        if((fd = open("echoall.out",O_WRONLY))<0){
            printf("not exist");
        }else
        {
            printf("file exist\n");
        }
        
        if(execlp("echoall.out","echoall.out","only 1 arg",(char *)0)<0){
            err_sys("execlp error");
        }
        
    }

    exit(0);
}
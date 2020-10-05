#include "apue.h"

int globvar = 6;
char buf[] = "a write to stdout\n";

int main(){
    int var;
    pid_t pid;

    var =  88;
    printf("before fork\n");

    if((pid = vfork())<0){
        err_sys("fork error");
    }else if(pid == 0){
        globvar ++ ;
        var ++;
        fclose(stdout);
        exit(0);
    }

    printf("pid = %ld, glob = %d, var = %d\n",(long)getpid(),globvar,var);
    exit(0);
}
#include "apue.h"
 
static void charattime(char *);

int main(){
    pid_t pid;
    if((pid=fork())<0){
        err_sys("fork error");
    }else if(pid==0){
        charattime("output from child\n");
    }else{
        charattime("output from parent\n");
    }
    exit(0);
}
static void charattime(char *str){
    char *ptr;
    int c;
    setbuf(stdout,NULL);
    for(ptr=str;(c=*ptr++)!=0;){
        putc(c,stdout);
    }
}
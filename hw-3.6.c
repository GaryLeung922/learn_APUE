#include "apue.h"
#include <fcntl.h>

int main(){
    int fd = open("/home/gopher/cpp/APUE/test",O_RDWR | O_APPEND);
    if(fd==-1)
        err_sys("open error");
    int n = lseek(fd,10,SEEK_SET);
    printf("%d",n);
    if(n!=10)
        err_sys("cannot lseek any position with o_append");
    if(write(fd,"00000",5)==-1)
        err_sys("cannot write");
    exit(0);
    
}
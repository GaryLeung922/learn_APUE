#include "apue.h"
#include <fcntl.h>

int dup2_copy(int fd1,int fd2);
int main(){
    
}
int dup2_copy(int fd1,int fd2){
    if(fd1<0 || fd2 <0)
        err_sys("fd < 0");
    if(fd1>fd2)
        err_sys("fd2 must greater than fd1");
    if(fd1==fd2)
        return fd1;
    
    char str[12];
    sprintf(str, "%d", fd1);
    char path[100];

    strcat(path,"/dev/fd/");
    strcat(path,str);
    int current  = open(path,O_RDWR);
    if (current==-1)
        err_sys("open error");
    int current2 = current;
    while(current2!=-1){
        current2 = open(path,O_RDWR);
        if (current2==fd2){
            while(current2!=current){
                if (close(current2)!=-1){
                    current2--;                    
                }else{
                    return fd2;
                }
        
            }
            return fd2;
        }
    }
    return -1;
}
#include "apue.h"
#include<fcntl.h>

int main(int argc ,char  *argv[]){
    if(argc!=3){
        err_ret("usage: ./a.out source_file copy_file ");
    }
    int sfd,dfd,i,n;
    if((sfd = open(argv[1],O_RDWR))<0){
        err_ret("open file:%s error",argv[1]);
    }
    if((dfd=open(argv[2],O_RDWR|O_CREAT,S_IRWXU))<0){
        err_ret("creat file: %s error",argv[2]);
    }
    char buf[100];
    while((i=read(sfd,buf,100))>0){
        n++;
        printf("%s|",buf);
        if(write(dfd,buf,100)<0){
            err_ret("write error");
        }
    }
    printf("\ntotal copy %d character.\n",n);
}
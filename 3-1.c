#include "apue.h"

int main(){
    __off_t t; 
    if((t=lseek(STDIN_FILENO,0,SEEK_END))==-1){
        printf("cannot seek\n");
    }else{
        printf("seek OK,%ld\n",t);
    }
    exit(0);
}
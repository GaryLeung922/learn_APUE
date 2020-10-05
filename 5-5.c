#include "apue.h"

int main(){
    char buf[10];
    printf("10\n");
    if(fgets(buf,10,stdin)!=NULL){
        if(ungetc('c',stdin)=='c'){
            printf("unget OK\n");
        }
        if(fputs(buf,stdout)==EOF){
            err_sys("output error");
        }
    }
    if(fgets(buf,10,stdin)!=NULL){
        //ungetc(5,stdin);
        if(fputs(buf,stdout)==EOF){
            err_sys("output error");
        }
    }
    if(ferror(stdin)){
        err_sys("input error");
    }
    exit(0);
}
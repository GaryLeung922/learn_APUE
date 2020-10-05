#include "apue.h"
#include <setjmp.h>

#define TOK_ADD 5
jmp_buf jmpbuffer;
void cmd_add();

int main(){
    bbb:

    char line[MAXLINE];
    if(setjmp(jmpbuffer)!=0){
        printf("error");
    }
    printf("before longjmp");
    cmd_add();
    printf("after longjmp");
    exit(0);
    
}
void cmd_add(){

    longjmp(jmpbuffer,1);
}
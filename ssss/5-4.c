#include "apue.h"

int main(){
    int c;
    while((c=getc(stdin))!=EOF){
        if(putc(c,stdout)==EOF){
            err_
        }
    }
}
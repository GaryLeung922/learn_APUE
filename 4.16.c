#include "apue.h"
#include <fcntl.h>

int main(){
    if(open("/home/gopher/prl-tools-lin.iso",O_RDWR)<0){
        err_sys("open error");
    }
    /* if(link("temfile","tempfile2")<0){
        err_sys("link error");
   
    } */
    if(unlink("/home/gopher/prl-tools-lin.iso")<0){
        err_sys("unlink error");
    }
    printf("file unlinked\n");
    sleep(25);
    printf("done\n");
    exit(0);
}

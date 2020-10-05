#include "apue.h"
#include <fcntl.h>

#define RWRWRW (S_IRUSR|S_IWUSR|S_IXUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

int main(void){
    int i = umask(0);
    printf("%d\n",i);
    if(creat("foo",RWRWRW)<0){
        err_sys("creat error for foo");
    }
    umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
    if(creat("bar",RWRWRW)<0){
        err_sys("creat error for bar");
    }
    exit(0);
}
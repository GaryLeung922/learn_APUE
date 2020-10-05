#include "apue.h"

int main(){
    printf("uid = %d, gid = %d\n",getuid(),getgid());
    printf(open_max());
    exit(0);
}
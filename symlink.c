# include "apue.h"
#include <unistd.h>

int main(){
    int res = symlink("./asdf","./asdf2");
    printf("%d\n",res);
    ssize_t r;
    char  buf[100];
    r = readlink("./asdf2",buf,10);
    printf("%s\n%d\n",buf,r);
}
#include "apue.h"
#include <sys/stat.h>

int main(){
    int n = mkdir("./ttt",S_IRUSR);
    printf("%d\n",n);
}
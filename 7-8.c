#include "apue.h"
#include <stdlib.h>

int main(){
    char* v = getenv("HOME");

    if(v!=NULL){
        printf("%s\n",v);
    }
}
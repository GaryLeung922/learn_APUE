#include "apue.h"
#include <stdio.h>
#include <unistd.h>

int main(){
    //FILE* f = fopen("test1.txt","rb");
    //char buf[100];
    //fgets(buf,100,f);
    //struct stat buf;
    //printf("%s\n",buf);
    //printf("%d\n",ftell(f));


    //FILE *fp=tmpfile();
    //int fd = fileno(fp);
    //fstat(fd,&buf);
    //printf("%s\n",buf.)

    //printf("% f\n",234342.8987879);

    int n = printf("");
    printf("\n%d\n",n);

    int rid = getuid();
    int eid = geteuid();
    printf("%d,%d\n",rid,eid);
    int r = setreuid(1000,0);
    int rid2 = getuid();
    int eid2 = geteuid();
    printf("%d,%d:%d\n",rid2,eid2,r);
}
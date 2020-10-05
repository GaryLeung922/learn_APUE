#include "apue.h"

int main(){
    char name[L_tmpnam], line[MAXLINE];
    FILE *fp;
    printf("%s\n",tmpnam(NULL));

    tmpnam(name);
    printf("%s\n",name);

    if((fp=tmpfile())==NULL){
        err_sys("tmpfile error");
    }
    fputs("one line of output\n",fp);
    //rewind(fp);
    printf("ftell:%d\n",ftell(fp));
    if(fgets(line,sizeof(line),fp)==NULL){
        err_sys("fgets error");
        if(ferror(fp)){
            err_sys("sadf:");
        }
        if(feof(fp)){
            err_sys("eof:");
        }
    }
    fputs(line,stdout);
    exit(0);
}
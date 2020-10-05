#include "apue.h"
#include <pwd.h>
#include <stddef.h>
#include <string.h>


int main(){
    struct passwd *pd = getpwnam("gopher");
    printf("%s,%s,%s\n",pd->pw_name,pd->pw_shell,pd->pw_dir);

}
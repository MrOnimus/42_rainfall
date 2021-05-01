#include <stdlib.h>
#include <stdio.h>

typedef void func_t();

void n(void)
{
    system("/bin/cat /home/user/level7/.pass");
    return;
}

void m(void)
{
    puts("Nope");
    return;
}

int main(int argc, char **argv)
{
    char *buf = (char*)malloc(64);
    func_t** func = (void**)malloc(4);

    *func = m;
    strcpy(buf, argv[1]);

    (*func)();
    return(0);
}

#include <stdio.h>
#include <stdlib.h>

unsigned int g_m;

void v(void)
{
    char s[520];

    fgets(s, 512, stdin);
    printf(s);
    if (g_m == 0x40)
    {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
    }
    return;
}

int main(void)
{
    v();
    return (0);
}

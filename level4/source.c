#include <stdio.h>

unsigned int g_m;

void p(char *s)
{
    printf(s);
    return;
}

void n(void)
{
    char buf[520];

    fgets(buf, 512, stdin);
    p(buf);
    if (g_m == 0x1025544)
        system("/bin/cat /home/user/level5/.pass");
    return;
}

int	main(void)
{
    n();
    return (0);
}

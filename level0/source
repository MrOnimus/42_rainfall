#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int input;
    char *executable[2];

    input = atoi(argv[1]);
    if (input == 0x1a7)
	{
        executable[0] = strdup("/bin/sh");
        executable[1] = 0;

        setresgid(getegid(), getegid(), getegid());
        setresuid(geteuid(), geteuid(), geteuid());

        execv("/bin/sh", executable);
    } else {
        fwrite("No !\n", 1, 5, stderr);
    }
    return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char arr[40];
    int num;
    
    num = atoi(argv[1]);
    if (num < 10) {
        memcpy(arr, argv[2], num * 4);
        if (num == 0x574f4c46) {
            execl("/bin/sh", 0x8048580, 0);
        }
        return 0;
    }
    return 1;
}
#include <stdio.h>
#include <stdlib.h>

int main(char argc, char **argv)
{
    FILE *f;
    int int_arr[16];
    char arr[66];
    int num;
    
    f = fopen("/home/user/end/.pass", "r");
    for (int i = 0; i < 33; i++) {
        int_arr[i] = 0;
    }
    if ((f == NULL) && (argc != 2)) return -1;
    fread(int_arr, 1, 66, f);
    num = atoi(argv[1]);
    int_arr[num] = 0;
    fread(arr, 1, 65, f);
    fclose(f);
    if (!strcmp(int_arr, argv[1])) {
        execl("/bin/sh", "/bin/sh", 0);
    } else {
        puts(arr);
    }
    return 0;
}
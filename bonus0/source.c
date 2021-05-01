#include <stdio.h>
#include <stdlib.h>

void p(char *buf, char *message) {
    char *ptr;
    char *buf1;

    puts(message);
    read(0, buf1, 4096);
    ptr = strchr(buf1, '\n');
    *ptr = '\0';
    strncpy(buf, buf1, 20);
}

void pp(char *buf) {
    char buf1[20];
    char buf2[20];
    unsigned len;

    p(buf1, "-");
    p(buf2, "-");
    strcpy(buf, buf1);
    len = strlen(buf1);
    buf[len] = ' ';
    buf[len + 1] = '\0';
    strcat(buf, buf2);
}

int main(void) {
    char buf[42];

    pp(buf);
    puts(buf);
    return 0;
}
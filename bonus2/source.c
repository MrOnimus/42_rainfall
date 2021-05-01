#include <stdio.h>
#include <stdlib.h>

int language;

void greetuser(char *ptr)
{
    char buf[72];
    
    if (language == 1) {
        strcpy(buf, "Goedemiddag! ");
    } else if (language == 2) {
        strcpy(buf, "Hyvää päivää ");
    } else if (language == 0) {
        strcpy(buf, "Hello ");
    }
    strcat(buf, ptr);
    puts(buf);
    return;
}


int main(int argc, char **argv)
{
    char buf[72];
    char *lang;
    if (argc == 3) {
        bzero(buf, 19);
        strncpy(buf, argv[1], 40);
        strncpy(buf + 40, argv[2], 32);
        lang = (char *)getenv("LANG");
        if (lang != NULL) {
            if (!strcmp(lang, "fi")) language = 2;
            else if (!strcmp(lang, "nl")) language = 1;
        }
        greetuser(buf);
        return 0;
    }
    return 1;
}
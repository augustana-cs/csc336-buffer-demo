#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void next_tag(char *str1){
    strcpy(str1, "START");
}

int main() {
    int valid = FALSE;
    char str1[8];
    char str2[8];

    next_tag(str1);
    
    gets(str2);
    if (strncmp(str1, str2, 8) == 0)
        valid = TRUE;

    printf("buffer1: str1(%s), str2(%s), valid(%d)\n", str1, str2, valid);

    return 0;
}
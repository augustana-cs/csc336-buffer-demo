#include <stdio.h>
#include <string.h>

void hello(char *tag)
{
    char inp[16];
    printf("Enter value for %s: ", tag);
    gets(inp);
    printf("Hello your %s is %s\n", tag, inp);
}

int main() {
    hello("name");
    return 0;
}
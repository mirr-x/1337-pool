#include <stdio.h>
#include <string.h>

int main()
{
    // Test cases
    char largestring[] = "Foo Bar Baz";
    char smallstring[] = "o ";
    char *ptr;

    ptr = strstr(largestring,smallstring);

    printf("%s\n",ptr);
}
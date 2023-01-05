#include <stdio.h>
#include <string.h>

size_t strlen_recursive(const char *s)
{
    if (*s == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + strlen_recursive(s + 1);
    }
}

int main(void)
{
    char s[] = "hello, world!";
    printf("The length of the string '%s' is %zu.\n", s, strlen_recursive(s));
    return 0;
}


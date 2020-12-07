#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}

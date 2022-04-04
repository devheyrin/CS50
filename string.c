#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string ans = get_string("what is your name?\n");
    printf("hello %s\n", ans);
}
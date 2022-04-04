#include <stdio.h>

void couph(int n);

int main(void) 
{
    couph(3);
}

void couph(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("couph\n");
    }
}
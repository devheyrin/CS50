#include <stdio.h>

void couph(void);

int main(void) 
{
    for (int i = 0; i < 3; i++)
    {
        couph();
    }
}

void couph(void)
{
    printf("couph\n");
}
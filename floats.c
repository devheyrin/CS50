#include <stdio.h>
#include <cs50.h>

int main(void)
{
    double x = get_float("x: ");
    double y = get_float("y: ");
    printf("x / y = %.50d\n", x/y);
}
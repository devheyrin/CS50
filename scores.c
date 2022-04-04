#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
   int n = get_int("Number: ");
   int scores[n];
   
   for (int i=0; i < n; i++)
   {
       scores[i] = get_int("Score %i: ", i);
   }
    
    printf("Avg: %.1f\n", average(n, scores));
}
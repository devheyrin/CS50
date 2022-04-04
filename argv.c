#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        printf("hello %s\n", argv[2]);
        // argv[0] 는 ./argv, argv[1]부터는 입력받은 단어가 순서대로 저장된다. 
        // argc 에는 입력받은 단어의 갯수가 저장된다. 
    }
    else
    {
        printf("%i", argc);
        printf("hello, world\n");
    }
}
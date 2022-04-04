#include <cs50.h>
#include <stdio.h>

int main(void)
{
   string names[4];
   names[0] = "jenny";
   names[1] = "지수";
   names[2] = "리사";
   names[3] = "로제";
   printf("%s\n", names[0][0]);
   printf("%c%i\n", names[0][0], names[0][900]);
}

// string 은 정해진 크기를 가질 수 없다.
// 그런데 string이 언제 끝나는지 어떻게 알 수 있을까?
// NULL 문자(\0)를 사용해서 알 수 있다. = 8개의 비트가 모두 0인 상태를 의미!
// 1바이트만큼 공간의 낭비가 일어난다.
// HI! 를 저장하려면 사실 3바이트가 필요한데, 널 문자를 포함해 4바이트를 차지하기 때문
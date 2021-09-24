#include <stdio.h>
int main(void)
{
int a;
int b;

puts("二つの整数を入力してください。");

printf("整数A：");
scanf("%d",&a);

printf("整数B：");
scanf("%d",&b);

printf("二つの整数の差は%dです。",a>b?a-b:b-a);

return 0;
}
#include <stdio.h>
int main(void)
{
int a;
int b;
int c;
printf("三つの整数を入力してください。\n");

printf("整数１:");
scanf("%d", &a);

printf("整数２:");
scanf("%d", &b);

printf("整数３:");
scanf("%d", &c);

printf("それらの和は%dです。\n",a + b + c);

return 0;
}
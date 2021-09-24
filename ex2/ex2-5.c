#include  <stdio.h>
int main(void)
{
double a;
double b;

printf("2つの整数を入力してください。\n");

printf("整数a：");
scanf("%lf", &a);

printf("整数b：");
scanf("%lf", &b);
 
printf("aの値はbの%lf％です。\n" , a / b * 100);

return 0;
}

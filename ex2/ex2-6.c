#include <stdio.h>
int main(void)
{
double a;

printf("身長を入力してください：");
scanf("%lf",&a);

printf("標準体重は%.1fです。\n" , (a -100) * 0.9);

return 0;
}
#include <stdio.h>
int main(void)
{
int n1,n2,n3;

puts("三つの整数を入力してください。");

printf("整数１：");
scanf("%d",&n1);
printf("整数２：");
scanf("%d",&n2);
printf("整数３：");
scanf("%d",&n3);

if (n1 == n2 && n1 == n3)
 puts("三つの整数は等しいです。");
else if ( n1 == n2 || n1 == n3 || n2 == n3)
 puts("二つの整数は等しいです。");
else 
puts("三つの整数はどれも等しくありません。");

return 0;

}

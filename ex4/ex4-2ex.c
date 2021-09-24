#include <stdio.h>
int main(void)
{
int n1,n2,max,min;
double sum;

puts("二つの整数を入力してください。");

printf("整数A：");
scanf("%d",&n1);

printf("整数B：");
scanf("%d",&n2);

n1>n2 ? (max = n1 , min = n2) : (min = n1 , max= n2);

sum = (max + min) * (max + 1 - min) / 2;

printf("%d以上%d以下の全整数の和は%.0fです。",min,max,sum);

return 0;

}

#include <stdio.h>
int sumup(int n)
{
int i;
int  sum = 0;
for(i=0;i<=n;i++)
 sum = sum + i;
printf("合計は%dです。\n",sum);
return 0;
}
int main(void){
int n;
do{
printf("正の整数を入力してください：");
scanf("%d",&n);
if (n<=0)
puts("正でない数を入力しないでください。");
}while(n <=0);

sumup(n);

return 0;
}

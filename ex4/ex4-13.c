#include <stdio.h>
int main(void)
{
int no,i;
int sum = 0;

printf("整数を入力してください：");
scanf("%d",&no);

for(i = 0; i <= no; i++)
 sum = sum + i;
 printf("1から%dまでの和は%dです。",no,sum);
 
 puts("");
 
 return 0;
}
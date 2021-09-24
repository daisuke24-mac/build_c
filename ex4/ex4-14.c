#include <stdio.h>
int main(void)
{
int no;
int i = 0;
int n = 0;

printf("正の整数を入力してください：");
scanf("%d",&no);

for(i = 2; i<=no; i++)
 printf("%d",i%10);
 
 puts("");
 
 return 0;
 }

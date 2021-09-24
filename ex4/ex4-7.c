#include <stdio.h>
int main(void)
{
int i, no,n;

printf("整数を入力してください：");
scanf("%d",&no);

i = 2;
n=1;
while(i <= no){
 n = n*2;
 printf("%d  ",n);
  i = i *2;
 }
 printf("\n");
 
 return 0;
}
#include <stdio.h>
int main(void)
{
int no;
int i = 1;

printf("正の整数：");
scanf("%d",&no);

if(no >= 0){
while(i++ <= no){
if( i%2 == 0)
 putchar('+');
else if( i%2 == 1)
putchar('-');
}
}
else
printf("");
return 0;
}
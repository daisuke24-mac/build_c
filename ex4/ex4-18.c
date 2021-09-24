#include <stdio.h>
int main(void)
{
int no,i,n;

printf("何個*を表示しますか：");
scanf("%d",&no);

for(i = 1;i <= no/5;i++)
 printf("*****\n");
if(no%5 >= 1){
for(n = 1;n <= no%5 ; n++)
 putchar('*');
 puts("");
 }
 else
return 0;
}
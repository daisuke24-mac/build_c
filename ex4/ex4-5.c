#include <stdio.h>
int main(void)
{
int i, no;

printf("整数を入力してください：");
scanf("%d",&no);

i = 1;
if(no>=1){
while(i <= no)
 printf("%d",i++);
 printf("\n");
} 
else
printf("");
 
 return 0;
}
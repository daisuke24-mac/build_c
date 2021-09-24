#include <stdio.h>
int main(void)
{
int i, no;

printf("整数を入力してください：");
scanf("%d",&no);

i = 1;
while(i <= (no/2))
 printf("%d  ",(i++)*2);
 
 printf("\n");
 
 return 0;
}
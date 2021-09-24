#include <stdio.h>
int main(void)
{
int no,i,t;

printf("整数を入力してください。");
scanf("%d",&no);

for(i = 1; i <= no ; i ++){
t = i * i;
printf("%dの二乗は%d\n",i,t );
}
return 0;
}
#include <stdio.h>
#define NUMBER 5
int main(void)
{
int i;
int tensu[NUMBER];
int sum;

printf("%d人の点数を入力してください。\n",NUMBER);
for(i=0;i<NUMBER;i++){
printf("%2d番目：",i+1);
scanf("%d",&tensu[i]);
sum += tensu[i];
}
printf("合計点：%5d\n",sum);
printf("平均点：%5.1f\n",(double)sum/NUMBER);

return 0;
}
#include <stdio.h>
int main(void)
{
int sw;
printf("月を入力してください：");
scanf("%d",&sw);

switch(sw){
case 1:puts("31");break;
case 2:puts("30");break;
case 3:puts("31");break;
case 4:puts("30");break;
case 5:puts("31");break;
case 6:puts("30");break;
case 7:puts("31");break;
case 8:puts("31");break;
case 9:puts("30");break;
case 10:puts("31");break;
case 11:puts("30");break;
case 12:puts("31");break;
default:puts("入力が間違っています。");
}
return 0;
}
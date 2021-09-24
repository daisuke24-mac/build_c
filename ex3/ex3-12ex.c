#include <stdio.h>
int main(void)
{
int no;

printf ("整数を入力してください：");
scanf("%d",&no);

switch(no%2){
    case 0:printf("%dは偶数です。\n",no);break;
    case 1:printf("%dは奇数です。\n",no);break;
}
return 0;
}

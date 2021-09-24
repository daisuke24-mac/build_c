#include <stdio.h>
#define sqr(x,y) ((x)-(y))

int main (void){
int x,y;

printf("二つの整数を入力してください。 \nただし、一つ目に大きい方の整数を入力してください。\n");
printf("整数１：");scanf("%d",&x);
printf("整数２：");scanf("%d",&y);

printf("その差は%dです。",sqr(x,y));

return 0;
}
#include <stdio.h>
int main(void)
{
int n1,n2,sub;

puts("二つの整数を入力してください。");

printf("整数A：");
scanf("%d",&n1);

printf("整数B：");
scanf("%d",&n2);

if(n1 - n2 >= 11  || n2 - n1 >= 11)
 puts("それらの差は１１以上です。");
else
 puts("それらの差は１０以下です。");

return 0;

}

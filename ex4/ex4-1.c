#include <stdio.h>
int main (void)

{
int retry;
do{
int no;

printf("整数を入力してください：");
scanf("%d",&no);

if(no == 0)
 puts("この整数は０です。");
else if(no > 0)
 puts("この整数は正です。");
else if(no < 0)
puts("この整数は負です。");

printf("続けますか？　[Yes : 0 / No : 9]");
scanf("%d",&retry);

}while(retry == 0);

return 0;
}
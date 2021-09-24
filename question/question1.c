#include <stdio.h>

int main(void){
int i;
int s[10];

for(i=0;i<10;i++){
printf("s[%d]:",i);
scanf("%d",&s[i]);
}
printf("偶数は");
for (i=0;i<10;i++){
if (s[i]%2 == 0)
 printf("%d ",s[i]);
}
putchar('\n');
printf("奇数は");
for (i=0;i<10;i++){
if (s[i]%2 == 1)
 printf("%d ",s[i]);
}
printf("です。\n");
return 0;
}
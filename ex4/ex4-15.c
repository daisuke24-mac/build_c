#include <stdio.h>
int main(void)
{
int a,b,c;
int i;

printf("何センチから：");
scanf("%d",&a);

printf("何センチまで：");
scanf("%d",&b);

printf("何センチごと：");
scanf("%d",&c);

for(i = a;i <= b;i = i + c )
 printf("%dcm %.2fkg\n",i,(i-100)*0.9);
 
 return 0;
 
}
#include <stdio.h>

void sv(*p,sum,ave){
int sum = 0;
int i;
float ave;
 for (i=0;i<5;i++){
 sum = sum + a[i];
 ave = sum / 5;;
 }
} 

int main(void)
{
	int i;
	float ave;
	int sum = 0;
	int a[5];
	int *p = a;	

for (i=0;i<5;i++){
 printf("整数%d:",i+1);
 scanf("%d",&a[i]);
 }
 sv();
 printf("%d %f",sum,ave);
 return 0;
 }
 
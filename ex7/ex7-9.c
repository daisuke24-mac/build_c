#include <math.h>
#include <stdio.h>

int main (void){
double sqrt (double x);
int n;

printf("実数を入力してください：");
scanf("%d",&n);
printf("その面積を持つ正方形の一辺の長さは%fです。\n",sqrt(n));

return 0;
}
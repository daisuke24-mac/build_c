#include <stdio.h>
void  intary_rcpy(int v1[], const int v2[],int n){
int i;
for(i=0;i<=n;i++){
v1[i] = v2[n-i-1];
}
}
/*下記は上の関数が正しく利用できるかを試すためのテストプログラム*/
int main (void){
int n1[4],n2[4];
int i,a;
for(i=0;i<=3;i++){
printf("n1[%d]:",i);
scanf("%d",&n2[i]);
}
intary_rcpy(n1,n2,4);

for(a=0;a<=3;a++)
printf("%d",n1[a]);
puts("");
return 0;
}

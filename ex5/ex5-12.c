#include <stdio.h>
int main(void)
{
int i,j,k;
int tensu[2][4][3] = {{{91,63,78},{67,72,16},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
int sum[4][3];

for(i=0;i<4;i++){
for(j=0;j<3;j++)
sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
}


puts("１回目の点数");
for(i=0; i<4;i++){
for(j=0;j<3;j++)
printf("%4d",tensu[0][i][j]);
putchar('\n');
}
puts("２回目の点数");
for(i=0; i<4;i++){
for(j=0;j<3;j++)
printf("%4d",tensu[1][i][j]);
putchar('\n');
}
puts("合計点");
for( i=0 ; i <4 ; i++){
for( j=0 ; j <3 ; j++)
printf("%4d",sum[i][j]);
putchar('\n');
}
return 0;
}

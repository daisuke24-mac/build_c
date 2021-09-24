#include <stdio.h>
enum month {Invalid,January,Febrary,March,April,May,June,July,August,September,October,November,December,};

void january(void){
puts("January");
}
void febrary(void){
puts("Febrary");
}
void march(void){
puts("March");
}
void april(void){
puts("April");
}
void may(void){
puts("May");
}
void june(void){
puts("June");
}
void july(void){
puts("July");
}
void august(void){
puts("August");
}
void september(void){
puts("September");
}
void october(void){
puts("October");
}
void november(void){
puts("November");
}
void december(void){
puts("December");
}

enum month select(void)
{
int tmp;

do{
printf("何月ですか？\n終了する場合は0を押してください。");
scanf("%d",&tmp);
}while (tmp < Invalid || tmp > December);
return tmp;
}

int main (void)
{
enum month selected;

do{
switch (selected = select()){
case Invalid : break;
case January : january(); break;
case Febrary : febrary();break;
case March : march();break;
case April : april(); break;
case May : may();break;
case June : june();break;
case July : july(); break;
case August : august();break;
case September : september();break;
case October : october(); break;
case November : november();break;
case December : december();break;
}
}while (selected != Invalid);

return 0;
}
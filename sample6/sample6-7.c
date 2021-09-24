#include <stdio.h>

enum animal{Dog,Cat,Monkey,Invalid};

void dog(void)
{
puts ("わんわん");
}

void cat(void)
{
puts ("ニャーニャー");
}

void monkey(void)
{
puts ("ウキキー");
}

enum animal select(void)
{
int tmp;

do{
printf("０：犬　１：猫　２：猿　３：終了　｜");
scanf("%d",&tmp);
}while(tmp < Dog || tmp > Invalid);
return tmp;
}

int main (void){

enum animal selected;

do{
switch (selected = select()){
case Dog : dog(); break;
case Cat : cat();break;
case Monkey : monkey();break;
}
}while (selected != Invalid);

return 0; 
}

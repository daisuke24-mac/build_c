#include <stdio.h>

#define NAME_LEN 64

typedef struct student{
char name[NAME_LEN];
int height;
float weight;
long schols;
}Student;

void hiroko(Student *std)
{
if ((*std).height < 180)(*std).height = 180;
if ((*std).weight < 80)(*std).weight = 80;
}

int main(void)
{
struct student sanaka = {"sanaka",175,62.5,73000};

hiroko(&sanaka);

printf("%s\n",sanaka.name);
printf("%d\n",sanaka.height);
printf("%.1f\n",sanaka.weight);
printf("%ld\n",sanaka.schols);

return 0;
}